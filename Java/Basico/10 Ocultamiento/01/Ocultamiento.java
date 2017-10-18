/*
	Alumn@:  Muñoz Gómez Luis Alberto
	Sección: 04
	Práctica 1
*/

public class Ocultamiento {  //el problema: libre acceso del exterior

	public static void main(String[] args) {
		MiFecha f=new MiFecha();
		f.dia=31;  //es posible, pero de qué mes?
		System.out.println("dia="+f.dia);
	}

}

class MiFecha{  //Fecha como registro
	public int dia;
	public int mes;
	public int anio;
}