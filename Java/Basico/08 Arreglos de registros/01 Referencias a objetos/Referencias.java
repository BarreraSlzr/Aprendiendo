
public class Referencias {

	public static void main(String args[]){
		Persona luis=new Persona();
		Persona alberto;
		luis.nombre="Luis Alberto";
		luis.telefono=1234567;
		alberto=luis;
		System.out.println("Valores originales");
		System.out.println("luis.nombre:"+luis.nombre+
				", telefono:"+luis.telefono);
		System.out.println("alberto.nombre:"+alberto.nombre+
				", telefono:"+alberto.telefono);
		System.out.println("Valores modificados");
		alberto.telefono=7890123;
		System.out.println("luis.nombre:"+luis.nombre+
				", telefono:"+luis.telefono);
		System.out.println("alberto.nombre:"+alberto.nombre+
				", telefono:"+alberto.telefono);
	}
}

class Persona{
	String nombre;
	long telefono;
}
