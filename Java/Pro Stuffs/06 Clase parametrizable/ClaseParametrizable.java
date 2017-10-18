
public class ClaseParametrizable {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Elemento<Integer> elem=new Elemento<Integer>();
		Lista<Integer> lis=new Lista<Integer>();
		Integer entero;
		//String valor;
		elem.fijaElemento(new Integer(10));
		//elem.fijaElemento("Hola");//no compila
		System.out.println(elem.imprime());
		System.out.println(elem.dameElemento());
		lis.inserta(new Integer(20));
		lis.inserta(new Integer(30));
		//lis.inserta("Hola");//no compila
		System.out.println(lis.recupera(0));
		entero=lis.recupera(1);
		//valor=lis.recupera(1);//no compila
		System.out.println(entero);
	}

}

class Elemento<T>{
	private T elemento;
	public void fijaElemento(T o){
		elemento=o;
	}
	public T dameElemento(){
		return elemento;
	}
	public String imprime(){
		return elemento.toString();
	}
}

class Lista<T>{
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
}