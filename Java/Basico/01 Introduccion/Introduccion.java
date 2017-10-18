
public class Introduccion {

	public static void main(String[] args) {
		System.out.println("Hola Mundo Java!");
		byte un=127;
		short dos=32767;
		int cuatro=0x7FFFFFFF;
		long ocho=0x7FFFFFFFFFFFFFFFL;
		float flotante=2.5F;
		double doble=96.08;
		final double PI=3.1416;
		boolean sonBienvenidos=true;
		System.out.println(un);
		System.out.println(dos);
		System.out.println(cuatro);
		System.out.println(ocho);
		System.out.println(flotante);
		System.out.println(doble);
		System.out.println(PI);
		System.out.println(sonBienvenidos);
		String s1="Bienvenidos.";
		String s2="Estructuras "+
					"de "+
					"Datos "+
					"I";
		if (sonBienvenidos){
			System.out.println(s1);
			System.out.println(s2);
		}
		//else siempre son bienvenidos
		System.out.printf("PI=%f\n",PI);
		//operador condicional
		s1=sonBienvenidos?"Si":"No";
		System.out.println(s1);
		System.out.println(sonBienvenidos?"Si":"No");
	}

}
