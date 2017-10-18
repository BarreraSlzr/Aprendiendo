
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
	
	boolean fijaNombre(String nombre){
		this.nombre=nombre;
		return true;
	}
	
	public boolean fijaInfo(String nombre){
		return fijaNombre(nombre);
	}
	
	/*public void fijaInfo(String apellido){//si descomenta, no compila
		this.apellido=apellido;
	}*/
	
	public boolean fijaSalario(double salario){
		this.salario=salario;
		return true;
	}
	
	public boolean fijaInfo(String nombre,double salario){
		if (fijaInfo(nombre)){
			return fijaSalario(salario);
		}
		else return false;
	}
	
	public boolean fijaFechaNacimiento(MiFecha fechaNacimiento){
		if (fechaNacimiento!=null){
			this.fechaNacimiento=fechaNacimiento;
			return true;
		}
		else return false;
	}
	
	public boolean fijaInfo(String nombre,double salario,MiFecha fechaNacimiento){
		if (fijaInfo(nombre,salario)){
			return fijaFechaNacimiento(fechaNacimiento);
		}
		else return false;
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

