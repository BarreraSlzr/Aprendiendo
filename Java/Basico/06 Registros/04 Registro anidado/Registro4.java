
public class Registro4 {

	public static void main(String[] args) {
		Persona luisAlberto=new Persona();
		Fecha fecha=new Fecha();
		luisAlberto.curp="MUGL790912...";
		luisAlberto.nombre="Luis Alberto";
		luisAlberto.telefono=1234567;
		fecha.anio=1979;
		fecha.mes=9;
		fecha.dia=12;
		luisAlberto.fechaNacimiento=fecha;
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