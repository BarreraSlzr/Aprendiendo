/*
	Alumn@:  Muñoz Gómez Luis Alberto
	Sección: 04
	Práctica 1
*/

public class Ocultamiento2 {  //el problema: libre acceso del exterior

	public static void main(String[] args) {
		MiFecha f=new MiFecha();
		f.dia=31;  //es posible, pero de qué mes?
		f.mes=4;	//31 de Abril no es fecha valida
		System.out.println("dia="+f.dia);
		System.out.println("mes="+f.mes);
	}

}
