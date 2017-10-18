/*
	Alumn@:  Mu�oz G�mez Luis Alberto
	Secci�n: 04
	Pr�ctica 1
*/

public class Encapsulamiento{  //la soluci�n

	public static void main(String[] args) {
		MiFecha f=new MiFecha();
		//f.dia=31;  //no compila por ocultamiento de informaci�n
		if (f.fijaDia(31)){
			System.out.println("permitio cambiar el dia");
		}
		else{
			System.out.println("NO permitio cambiar el dia");
		}
		//System.out.println("dia="+f.dia);//no compila
		System.out.println("dia="+f.dameDia());
	}

}

class MiFecha{
	private int dia=17;  //inicializacion por defecto
	private int mes=4;  //completar dame() y fija()
	private int anio=2013;  //completar dame() y fija()
	
	public boolean fijaDia(int diax){
		dia=diax;  //se requiere validar contra mes y contra anio antes de modificar
		//realizar el cambio de dia solo si la combinacion dia-mes-anio sera valida
		return true;  //no siempre es v�lido, devolveria true solo si la fecha es valida
	}
	
	public int dameDia(){
		return dia;
	}
}