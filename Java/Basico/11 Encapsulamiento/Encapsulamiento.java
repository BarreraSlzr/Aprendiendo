/*
	Alumn@:  Muñoz Gómez Luis Alberto
	Sección: 04
	Práctica 1
*/

public class Encapsulamiento{  //la solución

	public static void main(String[] args) {
		MiFecha f=new MiFecha();
		//f.dia=31;  //no compila por ocultamiento de información
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
		return true;  //no siempre es válido, devolveria true solo si la fecha es valida
	}
	
	public int dameDia(){
		return dia;
	}
}