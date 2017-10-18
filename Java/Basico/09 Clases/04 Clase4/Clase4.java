
public class Clase4 {

	public static void main(String[] args) {
		Persona luis=new Persona();
		Persona jose=new Persona();
		luis.fijaCurp("MUGL790912...");
		luis.fijaNombre("Luis Alberto");
		luis.fijaTelefono(1234567);
		System.out.println("CURP: "+luis.dameCurp());
		System.out.println("Nombre: "+luis.dameNombre());
		System.out.println("Telefono: "+luis.dameTelefono());
		jose.fijaCurp("MUGJ860912...");
		jose.fijaNombre("Jose Luis");
		jose.fijaTelefono(2345678);
		System.out.println("CURP: "+jose.dameCurp());
		System.out.println("Nombre: "+jose.dameNombre());
		System.out.println("Telefono: "+jose.dameTelefono());
	}
}

class Persona{  //como clase
	public String curp;
	public String nombre;
	public int telefono;
	
	public void fijaCurp(String curpx){
		curp=curpx;
	}
	
	public void fijaNombre(String nombrex){
		nombre=nombrex;
	}
	
	public void fijaTelefono(int telefonox){
		telefono=telefonox;
	}
	
	public String dameCurp(){
		return curp;
	}
	
	public String dameNombre(){
		return nombre;
	}
	
	public int dameTelefono(){
		return telefono;
	}
}