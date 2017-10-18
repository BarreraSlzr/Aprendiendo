
public class SobreCarga {

	public static void main(String[] args) {
		Empleado e=new Empleado();
		System.out.println(e.dameInfo());
		System.out.println("- - -");
		e.fijaInfo("Luis");
		System.out.println(e.dameInfo());
		System.out.println("- - -");
		e.fijaInfo("Alberto",1000);
		System.out.println(e.dameInfo());
		System.out.println("- - -");
		e.fijaInfo("Luis Alberto",4600,new MiFecha(1979,9,12));
		System.out.println(e.dameInfo());
	}

}

class Empleado{
	private String nombre;
	//private String apellido;//que tal si tambien tiene apellido
	private double salario;
	private MiFecha fechaNacimiento;
	
	public Empleado(){
		nombre="staff";
		salario=0;
		fechaNacimiento=new MiFecha(2007,8,1);
	}
	
	public void fijaInfo(String nombre){
		this.nombre=nombre;
	}
	
	/*public void fijaInfo(String apellido){//si descomenta, no compila
		this.apellido=apellido;
	}*/
	
	public void fijaInfo(String nombre,double salario){
		fijaInfo(nombre);
		this.salario=salario;
	}
	
	public void fijaInfo(String nombre,double salario,MiFecha fechaNacimiento){
		fijaInfo(nombre,salario);
		this.fechaNacimiento=fechaNacimiento;
	}
	
	public String dameInfo(){
		String info="Nombre: "+nombre+"\n"+
					"Salario: "+salario+"\n"+
					"Fecha Nacimiento: "+fechaNacimiento;
		return info;
	}
}

class MiFecha{  //Fecha como clase
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

