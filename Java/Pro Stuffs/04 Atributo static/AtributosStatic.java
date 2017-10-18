

public class AtributosStatic {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Alumno luis=new Alumno();
		Alumno alberto=new Alumno();
		Alumno hugo=new Alumno();
		System.out.println("C�digo de luis="+luis.dameCodigo());
		System.out.println("C�digo de alberto="+alberto.dameCodigo());
		System.out.println("C�digo de hugo="+hugo.dameCodigo());
		System.out.println("contador de luis="+luis.dameContadorAlumno());
		System.out.println("contador de alberto="+alberto.dameContadorAlumno());
		System.out.println("contador de hugo="+hugo.dameContadorAlumno());
	}

}

class Alumno{
	private static int contadorAlumno=0;
	private int codigo;
	
	public Alumno(){
		codigo=++contadorAlumno;
	}
	
	public int dameCodigo(){
		return codigo;
	}
	
	public int dameContadorAlumno(){
		return contadorAlumno;
	}
}
