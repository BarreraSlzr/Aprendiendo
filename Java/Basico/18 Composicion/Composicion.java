
public class Composicion {

	public static void main(String[] args) {
		Empleado luisAlberto=new Empleado("Luis Alberto",5000,new MiFecha(1979,9,12));
		Empleado luis=new Empleado("Luis",5000,null);//no apropiado null
		System.out.println(luisAlberto.dameInfo());
		System.out.println(luis.dameInfo());
	}
}

class Empleado{
	private String nombre;
	private double salario;
	private MiFecha fechaNacimiento;  //la composición es obligatoria
	
	public Empleado(String nombre, double salario,MiFecha fechaNacimiento){
		this.nombre=nombre;
		this.salario=salario;
		this.fechaNacimiento=fechaNacimiento;//si recibo null que hago?
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

