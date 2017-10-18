
public class Clase3 {

	public static void main(String[] args) {
		Persona luis=new Persona();
		luis.fijaCurp("MUGL790912...");
		luis.fijaNombre("Luis Alberto");
		luis.fijaTelefono(1234567);
		System.out.println("CURP: "+luis.dameCurp());
		System.out.println("Nombre: "+luis.dameNombre());
		System.out.println("Telefono: "+luis.dameTelefono());
	}
}

class Persona{  //como clase
	private String curp;
	private String nombre;
	private int telefono;
	
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