
public class PruebaAlcanceStatic {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("PI="+Circulo.PI);
		System.out.println("PI="+CirculoDibujable.PI);
	}

}

class Circulo{
	public static double PI=3.1416;
}

class CirculoDibujable extends Circulo{
	
}