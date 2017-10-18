
public class Herencia3 {

	public static void main(String[] args) {
		Jefe luisAlberto=new Jefe("Luis Alberto",32,30000,new MiFecha(1979,9,12),
				"Computación");
		System.out.println(luisAlberto.dameInfoJefe());
	}
}

class Empleado{
	private String nombre;
	private int edad;
	private double salario;
	private MiFecha fechaNacimiento;
	
	public Empleado(String nombre,int edad,double salario,MiFecha fechaNacimiento){
		this.nombre=nombre;
		this.edad=edad;
		this.salario=salario;
		this.fechaNacimiento=fechaNacimiento;
	}
	
	public String dameInfoEmpleado(){
		String info="Nombre: "+nombre+"\n"+
					"Edad: "+edad+"\n"+
					"Salario: "+salario+"\n"+
					"Fecha Nacimiento: "+fechaNacimiento;
		return info;
	}
}

class MiFecha{  //Fecha como clase
	private int dia;
	private int mes;
	private int anio;
	
	public MiFecha(int anio,int mes,int dia){
		this.anio=anio;
		this.mes=mes;
		this.dia=dia;
	}
	
	public String toString(){  //sobreescritura
		return anio+"/"+mes+"/"+dia;
	}
}

class Jefe extends Empleado{
	private String departamento;
	
	public Jefe(String nombre,int edad,double salario,MiFecha fechaNacimiento,
			String departamento){
		super(nombre,edad,salario,fechaNacimiento);
		this.departamento=departamento;
	}
	
	public String dameInfoJefe(){
		String info=dameInfoEmpleado()+"\n"+
			"Departamento: "+departamento;
		return info;
	}
}

