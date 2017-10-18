
public class ComunicacionConOtroDelMismoTipo {

	public static void main(String[] args) {
		Circulo c1=new Circulo();
		Circulo c2=new Circulo();
		Circulo c3=new Circulo();
		c1.fijaRadio(10);
		c1.fijaColorBorde(11);
		c1.fijaColorFondo(14);
		c2.fijaRadio(10);
		c2.fijaColorBorde(11);
		c2.fijaColorFondo(14);
		c3.fijaRadio(10);
		c3.fijaColorBorde(4);
		c3.fijaColorFondo(14);
		if (c1.esIgualA(c2)){
			System.out.println("c1 y c2 son iguales");
		}
		else{
			System.out.println("c1 y c2 son diferentes");
		}
		if (c2.esIgualA(c3)){
			System.out.println("c2 y c3 son iguales");
		}
		else{
			System.out.println("c2 y c3 son diferentes");
		}
		/*lo siguiente es una violacion a programacion modular
		if (c1.dameRadio()==c2.dameRadio() &&
			c1.dameColorBorde()==c2.dameColorBorde() &&
			c1.dameColorFondo()==c2.dameColorFondo()){
			System.out.println("c1 y c2 son iguales");
		}
		else{
			System.out.println("c1 y c2 son diferentes");
		}
		if (c1.dameRadio()==c3.dameRadio() &&
			c1.dameColorBorde()==c3.dameColorBorde() &&
			c1.dameColorFondo()==c3.dameColorFondo()){
			System.out.println("c1 y c3 son iguales");
		}
		else{
			System.out.println("c1 y c3 son diferentes");
		}
		*/
	}

}

class Circulo{
	private double radio;
	private int colorBorde;
	private int colorFondo;
	private final double PI=3.1416;
	
	public void fijaRadio(double radio){
		this.radio=radio;
	}
	
	public void fijaColorBorde(int colorBorde){
		this.colorBorde=colorBorde;
	}
	
	public void fijaColorFondo(int colorFondo){
		this.colorFondo=colorFondo;
	}
	
	public double dameRadio(){
		return radio;
	}
	
	public int dameColorBorde(){
		return colorBorde;
	}
	
	public int dameColorFondo(){
		return colorFondo;
	}
	
	public double dameArea(){
		return PI*radio*radio;
	}
	
	public boolean esIgualA(Circulo c){
		boolean resultado;
		if (radio==c.dameRadio() &&
			colorBorde==c.dameColorBorde() &&
			colorFondo==c.dameColorFondo()){
			resultado=true;
		}
		else{
			resultado=false;
		}
		return resultado;
	}
}