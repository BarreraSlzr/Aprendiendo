
public class Herencia5 {

	public static void main(String[] args) {
		Director alberto=new Director("Luis Alberto",32,30000,new MiFecha(1979,9,12),
			"Computación");
		alberto.incrementarPermiso();
		System.out.println(alberto.dameInfo());
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
	
	public String dameInfo(){
		String info="Nombre: "+nombre+"\n"+
				"Edad: "+edad+"\n"+
				"Salario: "+salario+"\n"+
				"Fecha Nacimiento: "+fechaNacimiento;//equivale a fechaNacimiento.toString()
		return info;
	}
}

class MiFecha {  //Fecha como clase implicito "extends Object"
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
	
	public String dameInfo(){//sobreescritura de metodo
		String info=super.dameInfo()+"\n"+
			"Departamento: "+departamento;
		return info;
	}
}


class Director extends Jefe{
	private double permisoAutomovil=5000;
	
	public Director(String nombre,int edad,double salario,MiFecha fechaNacimiento,
			String departamento){
		super(nombre,edad,salario,fechaNacimiento,departamento);
	}
	
	public void incrementarPermiso(){
		permisoAutomovil+=1000;
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Permiso automovil: "+permisoAutomovil;
		return info;
	}
}

