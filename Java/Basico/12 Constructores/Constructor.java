public class Constructor{

	public static void main(String[] args) {
		MiFecha fecha1,fecha2;
		fecha1=new MiFecha();
		fecha2=new MiFecha(2009,9,25);
		System.out.println("dia="+fecha1.dameDia());
		System.out.println("dia="+fecha2.dameDia());
	}

}

class MiFecha{
	private int dia;
	private int mes;  //completar dame() y fija()
	private int anio;  //completar dame() y fija()
	
	//constructor sin parametros
	public MiFecha(){
		anio=1979;
		mes=9;
		dia=12;
	}
	
	//constructor con parametros
	public MiFecha(int aniox,int mesx,int diax){
		anio=aniox;
		mes=mesx;
		dia=diax;
	}

	//este es el constructor por defecto si no se declara uno
	/*
	public MiFecha(){
	}
	*/	
	
	public boolean fijaDia(int diax){
		dia=diax;  //se requiere validar antes de modificar
		return true;  //no siempre es valido
	}
	
	public int dameDia(){
		return dia;
	}
}