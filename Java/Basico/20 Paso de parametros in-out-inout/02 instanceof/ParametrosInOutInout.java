
public class ParametrosInOutInout {
	public static int EMPLEADO=0;
	public static int JEFE=1;
	public static int DIRECTOR=2;
	public static int TOTAL_TIPOS_EMPLEADO=3;
	public static double SALARIO_EMPLEADO=8000;
	public static double SALARIO_JEFE=20000;
	public static double SALARIO_DIRECTOR=40000;
	public static int SEPTIEMBRE=9;
	
	public static void estableceSalariosEmpleadoJefeDirector(double[] salarios){
		/*salarios es parametro "out" (de salida) pues sale con contenido modificado,
		 * analogo al paso por referencia que reciba "basura"
		 */
		salarios[EMPLEADO]=SALARIO_EMPLEADO;
		salarios[JEFE]=SALARIO_JEFE;
		salarios[DIRECTOR]=SALARIO_DIRECTOR;
	}
	
	public static void inicializaEmpleados(Empleado luis,Jefe alberto,
			Director luisAlberto){
		/*"luis", "alberto" y "luisAlberto" son parametros "out" (de salida)
		 * pues entran objetos y sin importar sus contenidos, salen modificados
		 */
		double[] salarios=new double[TOTAL_TIPOS_EMPLEADO];
		String nombreDeLuis="Empleado Luis Alberto";

		luis.fijaNombre(nombreDeLuis);
		System.out.println("corroborando parametro de entrada: "+nombreDeLuis);
		estableceSalariosEmpleadoJefeDirector(salarios);
		System.out.println("corroborando parametro de salida: ");
		for(int i=0;i<TOTAL_TIPOS_EMPLEADO;i++){
			System.out.printf("salarios[%d]=%f\n",i,salarios[i]);
		}
		
		luis.fijaSalario(salarios[EMPLEADO]);
		luis.fijaFechaNacimiento(new MiFecha(1979,SEPTIEMBRE,16));
		
		alberto.fijaNombre("Jefe Luis Alberto");
		alberto.fijaSalario(salarios[JEFE]);
		alberto.fijaFechaNacimiento(new MiFecha(1979,SEPTIEMBRE,13));
		alberto.fijaDepartamento("Computacion");
		
		luisAlberto.fijaNombre("Director Luis Alberto");
		luisAlberto.fijaSalario(salarios[DIRECTOR]);
		luisAlberto.fijaFechaNacimiento(new MiFecha(1979,SEPTIEMBRE,12));
		luisAlberto.fijaDepartamento("Computacion");
	}

	public static void main(String[] args) {
		Director luisAlberto=new Director();
		Jefe alberto=new Jefe();
		Empleado luis=new Empleado();
		
		inicializaEmpleados(luis,alberto,luisAlberto);
		System.out.println("Salarios antes de incrementar salario");
		System.out.println(luis.dameNombre()+" gana: "+luis.dameSalario());
		System.out.println("- - - - - - - - - -");
		System.out.println(alberto.dameNombre()+" gana: "+alberto.dameSalario());
		System.out.println("- - - - - - - - - -");
		System.out.println(luisAlberto.dameNombre()+" gana: "+luisAlberto.dameSalario());
		System.out.println("- - - - - - - - - -");
		alberto.incrementaSalarioAEmpleado(luis, 10);
		luisAlberto.incrementaSalarioAEmpleado(alberto, 5);
		luisAlberto.incrementaSalarioAEmpleado(luisAlberto, 100);
		alberto.incrementaSalarioAEmpleado(luisAlberto, 100);
		System.out.println("Salarios despues de incrementar salario");
		System.out.println(luis.dameNombre()+" gana: "+luis.dameSalario());
		System.out.println("- - - - - - - - - -");
		System.out.println(alberto.dameNombre()+" gana: "+alberto.dameSalario());
		System.out.println("- - - - - - - - - -");
		System.out.println(luisAlberto.dameNombre()+" gana: "+luisAlberto.dameSalario());
		System.out.println("- - - - - - - - - -");
		luisAlberto.fijaSalario(50000);
		System.out.println("Pero puedo fijarle el salario a luisAlberto desde main");
		System.out.println(luisAlberto.dameNombre()+" gana: "+luisAlberto.dameSalario());
		System.out.println("- - - - - - - - - -");
	}
}

class Empleado{
	private String nombre;
	private double salario;
	private MiFecha fechaNacimiento;
	
	public void fijaNombre(String n){
		//"n" es parametro "in" (de entrada) porque no cambia su valor al salir
		nombre=n;
		n="Caliman";//esta linea no sirve pues es paso por valor
	}
	
	public String dameNombre(){
		return nombre;
	}
	
	public void fijaSalario(double s){
		//"s" es parametro "in" (de entrada) porque no cambia su valor al salir
		salario=s;
		s=50000;//esta linea no sirve pues es paso por valor
	}
	
	public double dameSalario(){
		return salario;
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
	
	public void fijaDepartamento(String d){
		departamento=d;
	}
	
	public void incrementaSalarioAEmpleado(Empleado e,double porcentajeIncremento){
		/*"e" es parametro "in-out" (de entrada-salida)
		 * pues "e" tiene contenido util y sale con contenido modificado,
		 * analogo al paso por referencia para por ejemplo un "uppercase"
		 */
		double salarioAnterior=e.dameSalario();
		if (!(e instanceof Jefe) && !(e instanceof Director)){
			//El Jefe solo puede incrementar a Empleados
			e.fijaSalario(salarioAnterior+salarioAnterior*porcentajeIncremento/100);
		}
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
