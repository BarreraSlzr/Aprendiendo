
public class Delegacion {

	public static void main(String[] args) {
		Empleado luis=new Empleado("Luis",9000,new MiFecha(1980,2,1));
		Secretario alberto=new Secretario("Alberto",5000,new MiFecha(1981,3,2),"7-15hrs.");
		Jefe luisAlberto=new Jefe("Luis Alberto",20000,new MiFecha(1979,9,12),"Computación");
		System.out.println("El secretario sabe como imprimir...");
		alberto.imprimeInfoEmpleado(luis);
		luisAlberto.fijaSecretario(alberto);//concepto de agregacion
		System.out.println("El jefe solicita al secretario imprimir...");
		luisAlberto.imprimeInfoEmpleado(luis);
	}

}

class Secretario extends Empleado{
	private String horario;
	
	public Secretario(String nombrex, double salariox,MiFecha fechaNacimientox,
			String horariox){
		super(nombrex,salariox,fechaNacimientox);
		horario=horariox;
	}
	
	public void imprimeInfoEmpleado(Empleado e){
		System.out.println("- - - - - - - - - -");
		System.out.println(e.dameInfo());
		System.out.println("- - - - - - - - - -");
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Horario: "+horario;
		return info;
	}
}

class Jefe extends Empleado{
	private String departamento;
	private Secretario secretario;
	
	public Jefe(String nombre, double salario,MiFecha fechaNacimiento,
			String departamento){
		super(nombre,salario,fechaNacimiento);
		this.departamento=departamento;
	}
	
	public void fijaSecretario(Secretario s){
		secretario=s;
	}
	
	public void imprimeInfoEmpleado(Empleado e){
		if (secretario!=null)
			secretario.imprimeInfoEmpleado(e);
		else
			System.out.println("No puedo hacer esto");
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Departamento: "+departamento;
		return info;
	}
}

class Empleado{
	private String nombre;
	private double salario;
	private MiFecha fechaNacimiento;  //la composición es obligatoria
	
	public Empleado(String nombrex, double salariox,MiFecha fechaNacimientox){
		nombre=nombrex;
		salario=salariox;
		fechaNacimiento=fechaNacimientox;
	}
	
	public String dameInfo(){
		String info="Nombre: "+nombre+"\n"+
					"Salario: "+salario+"\n"+
					"Fecha Nacimiento: "+fechaNacimiento;
		return info;
	}
}

class MiFecha{
	public int dia;
	public int mes;
	public int anio;
	
	public MiFecha(int aniox,int mesx,int diax){
		anio=aniox;
		mes=mesx;
		dia=diax;
	}
	
	public String toString(){  //sobreescritura
		return anio+"/"+mes+"/"+dia;
	}
}
