
public class Registro5 {

	public static void main(String[] args) {
		Persona luisAlberto=new Persona();
		luisAlberto.curp="MUGL790912...";
		luisAlberto.nombre="Luis Alberto";
		luisAlberto.telefono=1234567;
		luisAlberto.fechaNacimiento=new Fecha();
		luisAlberto.fechaNacimiento.anio=1979;
		luisAlberto.fechaNacimiento.mes=9;
		luisAlberto.fechaNacimiento.dia=12;
		System.out.println("CURP: "+luisAlberto.curp);
		System.out.println("Nombre: "+luisAlberto.nombre);
		System.out.println("Telefono: "+luisAlberto.telefono);
		System.out.println("Fecha Nacimiento: "+luisAlberto.fechaNacimiento.anio+
				"/"+luisAlberto.fechaNacimiento.mes+"/"+luisAlberto.fechaNacimiento.dia);
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
	Fecha fechaNacimiento;
}