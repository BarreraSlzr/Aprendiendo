/*
	Alumn@:  Mu�oz G�mez Luis Alberto
	Secci�n: 04
	Pr�ctica 1
*/

public class Ocultamiento2 {  //el problema: libre acceso del exterior

	public static void main(String[] args) {
		MiFecha f=new MiFecha();
		f.dia=31;  //es posible, pero de qu� mes?
		f.mes=4;	//31 de Abril no es fecha valida
		System.out.println("dia="+f.dia);
		System.out.println("mes="+f.mes);
	}

}
