

public class Herencia6 {

	public static void main(String[] args) {
		Director luisAlberto=new Director();
		Jefe alberto=new Jefe();
		Empleado luis=new Empleado();
		
		luis.fijaNombre("Luis");
		luis.fijaSalario(10000);
		luis.fijaFechaNacimiento(new MiFecha(1979,9,16));
		
		alberto.fijaNombre("Alberto");
		alberto.fijaSalario(20000);
		alberto.fijaFechaNacimiento(new MiFecha(1979,9,13));
		alberto.fijaDepartamento("Computacion");
		alberto.incrementaSalarioEmpleado(luis);
		alberto.adornaNombre();
		
		luisAlberto.fijaNombre("Luis Alberto");
		luisAlberto.fijaSalario(40000);
		luisAlberto.fijaFechaNacimiento(new MiFecha(1979,9,12));
		luisAlberto.fijaDepartamento("Computacion");
		luisAlberto.incrementarPermiso();
		
		System.out.println(luis.dameInfo());
		System.out.println("- - - - - - - - - -");
		System.out.println(alberto.dameInfo());
		System.out.println("- - - - - - - - - -");
		System.out.println(luisAlberto.dameInfo());
	}
}

class Empleado{
	protected String nombre;				//acceso protected libre para hijos de esta clase
	protected double salario;
	protected MiFecha fechaNacimiento;
	
	public void fijaNombre(String n){
		nombre=n;
	}
	
	public void fijaSalario(double s){
		salario=s;
	}
	
	public void fijaFechaNacimiento(MiFecha f){
		fechaNacimiento=f;
	}
	
	public String dameInfo(){
		String info="Nombre: "+nombre+"\n"+
					"Salario: "+salario+"\n"+
					"Fecha Nacimiento: "+fechaNacimiento;
		return info;
	}
}

class Jefe extends Empleado{
	private String departamento;
	
	public void adornaNombre(){
		nombre="***"+nombre+"***";/*por protected puedo modificar nombre heredado
									sin usar fijaNombre()*/
	}
	
	public void fijaDepartamento(String d){
		departamento=d;
	}
	
	public void incrementaSalarioEmpleado(Empleado e){
		e.salario+=100;//lo puede modificar porque Encargado es hijo de Empleado
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Departamento: "+departamento;
		return info;
	}
}

class Director extends Jefe{
	private double permisoAutomovil=5000;
	
	public void incrementarPermiso(){
		permisoAutomovil+=1000;
	}
	
	public String dameInfo(){  //sobreescritura
		String info=super.dameInfo()+"\n"+
			"Permiso automovil: "+permisoAutomovil;
		return info;
	}
}

class MiFecha{
	private int dia;
	private int mes;
	private int anio;
	
	public MiFecha(int aniox,int mesx,int diax){
		anio=aniox;
		mes=mesx;
		dia=diax;
	}
	
	public String toString(){  //sobreescritura
		return anio+"/"+mes+"/"+dia;
	}
}
