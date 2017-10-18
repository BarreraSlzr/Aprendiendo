
public class Herencia1 {
	public static void main(String[] args){
		Empleado luis=new Empleado("Luis",31,18000,new MiFecha(1979,9,16));
		System.out.println(luis.dameInfoEmpleado());
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
					"Edad: "+(new Integer(edad)).toString()+"\n"+
					"Salario: "+(new Double(salario)).toString()+"\n"+
					"Fecha Nacimiento: "+fechaNacimiento.toString();
		return info;
	}
}

class MiFecha extends Object{  //Fecha como clase
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
