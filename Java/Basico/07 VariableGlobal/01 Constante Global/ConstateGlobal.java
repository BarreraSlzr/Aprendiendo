
public class ConstateGlobal {
	static final int MARZO=3;//que pasa si comentas esta?
	//final int FEBRERO=2;//y descomentas esta otra?
	static final int SEPTIEMBRE=9;
	
	public static void imprimePersona(Persona p){
		System.out.println("CURP: "+p.curp);
		System.out.println("Nombre: "+p.nombre);
		System.out.println("Telefono: "+p.telefono);
		System.out.println("Fecha Nacimiento: "+p.fechaNacimiento.anio+
				"/"+p.fechaNacimiento.mes+"/"+p.fechaNacimiento.dia);
	}

	public static void main(String[] args) {
		Persona luisAlberto=new Persona();
		Fecha otraFecha=new Fecha();
		luisAlberto.curp="MUGL790912...";
		luisAlberto.nombre="Luis Alberto";
		luisAlberto.telefono=1234567;
		luisAlberto.fechaNacimiento.anio=1979;
		luisAlberto.fechaNacimiento.mes=SEPTIEMBRE;
		luisAlberto.fechaNacimiento.dia=12;
		imprimePersona(luisAlberto);
		otraFecha.dia=06;
		otraFecha.mes=MARZO;
		otraFecha.anio=2015;
		luisAlberto.fechaNacimiento=otraFecha;
		imprimePersona(luisAlberto);
	}
}

class Fecha{
	int anio;
	int mes;
	int dia;
}

class Persona{  //como registro
	String curp;
	String nombre;
	int telefono;
	Fecha fechaNacimiento=new Fecha();
}