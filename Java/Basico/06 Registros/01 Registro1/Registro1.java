
public class Registro1 {

	public static void main(String[] args) {
		Circulo c=new Circulo();
		c.radio=10;
		c.colorBorde=11;
		c.colorFondo=14;
		System.out.println(c.radio);
		System.out.println(c.colorBorde);
		System.out.println(c.colorFondo);
	}
}

class Circulo{  //como registro
	double radio;
	int colorBorde;
	int colorFondo;
}