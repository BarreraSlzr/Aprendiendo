
public class Registro3 {

	public static void main(String[] args) {
		Persona p=new Persona();
		p.curp="MUGL790912...";
		p.nombre="Luis Alberto";
		p.telefono=1234567;
		System.out.println("CURP: "+p.curp);
		System.out.println("Nombre: "+p.nombre);
		System.out.println("Telefono: "+p.telefono);
	}
}

class Persona{  //como registro
	String curp;
	String nombre;
	int telefono;
}