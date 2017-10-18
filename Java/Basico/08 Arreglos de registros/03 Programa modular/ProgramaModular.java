
public class ProgramaModular {
	
	public static void imprimePersonas(Persona[] personas){
		for(int i=0;i<personas.length;i++){
			System.out.println("Persona "+i+
					". nombre:"+personas[i].nombre+
					", telefono:"+personas[i].telefono);
		}
	}

	public static void main(String args[]){
		Persona personas[];
		personas=new Persona[2];
		personas[0]=new Persona();//que pasa si comentas esta?
		personas[1]=new Persona();
		personas[0].nombre="Luis";
		personas[0].telefono=12345;
		personas[1].nombre="Alberto";
		personas[1].telefono=67890;
		System.out.println("Arreglo original");
		imprimePersonas(personas);
		personas[1]=personas[0];
		System.out.println("Arreglo modificado por desreferenciacion");
		imprimePersonas(personas);
	}
}

class Persona{
	String nombre;
	long telefono;
}
