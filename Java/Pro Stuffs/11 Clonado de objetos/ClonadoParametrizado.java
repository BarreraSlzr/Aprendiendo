
public class ClonadoParametrizado {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Lista<Persona> alpha=new Lista<Persona>();
		Lista<Persona> beta;
		alpha.inserta(new Persona("Luis",34));
		alpha.inserta(new Persona("Alberto",34));
		try{
			beta=(Lista<Persona>)alpha.clone();
			alpha.recupera(0).nombre="Jaja";
			alpha.recupera(1).nombre="Jeje";
			System.out.println(alpha.recupera(0));
			System.out.println(alpha.recupera(1));
			System.out.println(beta.recupera(0));
			System.out.println(beta.recupera(1));
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

class Persona extends Clonable{
	public String nombre;
	public int edad;
	public Persona(String nombre,int edad){
		this.nombre=nombre;
		this.edad=edad;
	}
	public String toString(){
		return "nombre:"+nombre+",edad:"+edad;
	}
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
}

class Clonable implements Cloneable{
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
}

class Lista<T extends Clonable> implements Cloneable{
	private final int MAX_ELEMENTOS=20;
	private Object[] lista=new Object[MAX_ELEMENTOS];
	private int cuentaElementos;
	
	public void inserta(T o){
		if (cuentaElementos<MAX_ELEMENTOS){
			lista[cuentaElementos++]=o;
		}
	}
	
	@SuppressWarnings("unchecked")
	public T recupera(int pos){
		return (T)lista[pos];
	}
	
	@SuppressWarnings("unchecked")
	public Object clone() throws CloneNotSupportedException{
		Object o=super.clone();
		Lista<T> lis=(Lista<T>)o;
		lis.lista=new Object[MAX_ELEMENTOS];
		for(int i=0,j=lis.lista.length;i<j && lista[i]!=null;i++){
			lis.lista[i]=((Clonable)lista[i]).clone();
		}
		return o;
	}
}