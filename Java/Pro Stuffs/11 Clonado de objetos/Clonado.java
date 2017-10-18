
public class Clonado {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Persona p=new Persona("Luis",34);
		Persona q;
		//Persona q=p;
		try{
			q=(Persona)p.clone();
			imprimePersonas(p,q);
			p.nombre="Alberto";
			imprimePersonas(p,q);
		}catch(CloneNotSupportedException e){
			System.out.println("No se puede clonar");
		}
	}

	public static void imprimePersonas(Persona p,Persona q){
		if (p==q){
			System.out.println("p y q son el mismo objeto");
		}
		else{
			System.out.println("p y q son objetos diferentes");
		}
		System.out.println("Nombre de p="+p.nombre);
		System.out.println("Nombre de q="+q.nombre);
	}
}

class Persona implements Cloneable{
//class Persona{
	public String nombre;
	public int edad;
	public Persona(String nombre,int edad){
		this.nombre=nombre;
		this.edad=edad;
	}
	/*public Object clone(){//sobrecargando el clone()
		Persona p=new Persona();
		p.nombre=nombre;
		return p;
	}*/
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
}
