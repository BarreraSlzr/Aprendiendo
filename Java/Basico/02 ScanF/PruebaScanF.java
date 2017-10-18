
public class PruebaScanF {

	public static void main(String[] args) {
		int valorEntero;
		float valorFlotante;
		double valorDouble;
		char valorCaracter;
		String valorCadena;

		System.out.print("Dame un numero entero: ");
		valorEntero=ScanF.leeInt();
		System.out.println("leido fue "+valorEntero);
		
		System.out.print("Dame un numero real: ");
		valorFlotante=ScanF.leeFloat();
		System.out.println("leido fue "+valorFlotante);
		
		System.out.print("Dame un numero doble: ");
		valorDouble=ScanF.leeDouble();
		System.out.println("leido fue "+valorDouble);
		
		System.out.print("Dame un caracter: ");
		valorCaracter=ScanF.leeChar();
		System.out.println("leido fue "+valorCaracter);
		
		System.out.print("Dame una cadena: ");
		valorCadena=ScanF.leeString();
		System.out.println("leido fue "+valorCadena);
	}

}
