
public class Registro2 {

	public static void main(String[] args) {
		Pelicula p=new Pelicula();
		p.peliculaID=1;
		p.precioBoleto=4.50;
		p.clasificacion='A';
		System.out.println(p.peliculaID);
		System.out.println(p.precioBoleto);
		System.out.println(p.clasificacion);
	}
}

class Pelicula{  //como registro
	int peliculaID;
	double precioBoleto;
	char clasificacion;
}