
public class VariableGlobal {
	static final int SEPTIEMBRE=9;
	static Persona alberto;
	static int mes;

	public static void imprimePersona(Persona p){
		System.out.println("CURP: "+p.curp);
		System.out.println("Nombre: "+p.nombre);
		System.out.println("Telefono: "+p.telefono);
		System.out.println("*******************");
	}

	public static void main(String[] args) {
		Persona luis=new Persona();
		int a;
		a=10;
		mes=SEPTIEMBRE;//que pasa si comento esta línea?
		System.out.println("a="+a);
		System.out.println("mes="+mes);
		luis.curp="MUGL790912...";
		luis.nombre="Luis Alberto";
		luis.telefono=1234567;
		System.out.println("Imprimiendo a Luis:");
		imprimePersona(luis);
		
		alberto=new Persona();//que pasa si comento esta linea?
		alberto.curp="MUGL790912IC7";
		alberto.nombre="Alberto";
		alberto.telefono=45678990;
		imprimePersona(alberto);
		
		modificaAlberto();
		imprimePersona(alberto);
	}
	
	public static void modificaAlberto(){
		alberto.nombre="Luis Alberto";
	}
}

class Persona{  //como registro
	String curp;
	String nombre;
	int telefono;
}