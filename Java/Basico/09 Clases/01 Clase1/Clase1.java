
public class Clase1 {

	public static void main(String[] args) {
		Circulo c=new Circulo();
		c.fijaRadio(10);
		c.fijaColorBorde(11);
		c.fijaColorFondo(14);
		System.out.println(c.dameRadio());
		System.out.println(c.dameColorBorde());
		System.out.println(c.dameColorFondo());
		System.out.println(c.dameArea());
	}
}

class Circulo{  //como clase
	private double radio;
	private int colorBorde;
	private int colorFondo;
	public final double PI=3.1416;
	
	public void fijaRadio(double radiox){
		radio=radiox;
	}
	
	public void fijaColorBorde(int colorBordex){
		colorBorde=colorBordex;
	}
	
	public void fijaColorFondo(int colorFondox){
		colorFondo=colorFondox;
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
}