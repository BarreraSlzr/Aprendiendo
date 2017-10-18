
public class Clase2 {

	public static void main(String[] args) {
		Pelicula a=new Pelicula();
		a.fijaPeliculaID(1);
		a.fijaPrecioBoleto(4.50);
		a.fijaClasificacion('A');
		System.out.println(a.damePeliculaID());
		System.out.println(a.damePrecioBoleto());
		System.out.println(a.dameClasificacion());
	}
}

class Pelicula{  //como clase
	private int peliculaID;
	private double precioBoleto;
	private char clasificacion;
	
	public void fijaPeliculaID(int peliculaIDx){
		peliculaID=peliculaIDx;
	}
	
	public void fijaPrecioBoleto(double precioBoletox){
		precioBoleto=precioBoletox;
	}
	
	public void fijaClasificacion(char clasificacionx){
		clasificacion=clasificacionx;
	}
	
	public int damePeliculaID(){
		return peliculaID;
	}
	
	public double damePrecioBoleto(){
		return precioBoleto;
	}
	
	public char dameClasificacion(){
		return clasificacion;
	}
}