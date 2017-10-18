
public class Agregacion {

	public static void main(String[] args) {
		Empleado e=new Empleado("Luis Alberto",5000);
		System.out.println(e.dameInfo());
		e.fijaFechaNacimiento(new MiFecha(1979,9,12));
		System.out.println("***********************");
		System.out.println(e.dameInfo());
	}

}

class Empleado{
	private String nombre;
	private double salario;
	private MiFecha fechaNacimiento=null;  //la agregación es opcional
	
	public Empleado(String nombre, double salario){
		this.nombre=nombre;
		this.salario=salario;
		//fechaNacimiento=null;
	}
	
	public void fijaFechaNacimiento(MiFecha fecha){
		fechaNacimiento=fecha;
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

