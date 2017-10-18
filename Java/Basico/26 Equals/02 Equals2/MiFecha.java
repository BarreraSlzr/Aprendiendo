
public class MiFecha {
	public static final int OCTUBRE=10;
	public static final int NOVIEMBRE=11;

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Fecha fecha1=new Fecha(2009,NOVIEMBRE,11);
		Fecha fecha2=new Fecha(2013,OCTUBRE,29);
		//Fecha fecha2=new Fecha(2009,NOVIEMBRE,11);
		Fecha fecha3=fecha1;
		if (fecha1.equals(fecha2)){
			System.out.println("Son fechas iguales");
		}
		else{
			System.out.println("Son fechas distintas");
		}
		if (fecha1==fecha2){
			System.out.println("fecha1 y fecha2 son el mismo objeto");
		}
		else{
			System.out.println("fecha1 y fecha2 son objetos distintos");
		}
		if (fecha1==fecha3){
			System.out.println("fecha1 y fecha3 son el mismo objeto");
		}
		else{
			System.out.println("fecha1 y fecha3 son objetos distintos");
		}
	}

}

class Fecha{
	private int anio;
	private int mes;
	private int dia;
	
	public Fecha(int aniox,int mesx,int diax){
		anio=aniox;
		mes=mesx;
		dia=diax;
	}
	
	public boolean equals(Object o){
		boolean resultado=false;
		if ((o!=null)&&(o instanceof Fecha)){
			Fecha f=(Fecha)o;
			if (anio==f.anio && mes==f.mes && dia==f.dia){
				resultado=true;
			}
		}
		return resultado;
	}
	
	public int hashCode(){
		return anio^mes^dia;
	}
}
