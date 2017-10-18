
public class ColeccionesHeterogeneas {

	public static void main(String[] args) {
		Empleado luis=new Empleado("Luis",9000,new MiFecha(1980,2,1));
		Secretario alberto=new Secretario("Alberto",5000,new MiFecha(1981,3,2),"7-15hrs.");
		Ingeniero luisAlberto=new Ingeniero("Luis Alberto",15000,new MiFecha(1979,9,12),"Software de Base");
		Jefe lamg=new Jefe("LAMG",20000,new MiFecha(1979,9,16),"Computación");
		Empleado empleados[]=new Empleado[4];
		empleados[0]=luis;
		empleados[1]=alberto;
		empleados[2]=luisAlberto;
		empleados[3]=lamg;
		for(int i=0,j=empleados.length;i<j;i++){
			System.out.println(i+":\n"+empleados[i].dameInfo()+"\n");
		}
	}

}

class Ingeniero extends Empleado{
	private String especialidad;
	
	public Ingeniero(String nombrex, double salariox,MiFecha fechaNacimientox,
			String especialidadx){
		super(nombrex,salariox,fechaNacimientox);
		especialidad=especialidadx;
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Especialidad: "+especialidad;
		return info;
	}
}

class Secretario extends Empleado{
	private String horario;
	
	public Secretario(String nombrex, double salariox,MiFecha fechaNacimientox,
			String horariox){
		super(nombrex,salariox,fechaNacimientox);
		horario=horariox;
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Horario: "+horario;
		return info;
	}
}

class Jefe extends Empleado{
	private String departamento;
	
	public Jefe(String nombrex, double salariox,MiFecha fechaNacimientox,
			String departamentox){
		super(nombrex,salariox,fechaNacimientox);
		departamento=departamentox;
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
