import java.util.Vector;

public class ArreglosDinamicos {

	public static void imprimeVector(Vector v){
		String s;
		//Object s;
		for(int i=0;i<v.size();i++){
			s=(String)v.get(i);
			//s=v.get(i);
			System.out.println(s);
		}
		System.out.println("- - - - - - - - - -");
	}
	
	public static void main(String[] args) {
		Vector v=new Vector();
		String s="Seminario ";
		v.add(s);
		s="de ";
		v.add(s);
		s="Estructuras ";
		v.add(s);
		s="de ";
		v.add(s);
		s="Datos ";
		v.add(s);
		s="I ";
		v.add(s);
		ArreglosDinamicos.imprimeVector(v);
		v.remove(1);
		ArreglosDinamicos.imprimeVector(v);
		v.remove(2);
		ArreglosDinamicos.imprimeVector(v);
		v.add(new Integer(10));
		Integer i=(Integer)v.get(v.size()-1);
		System.out.println(i);
		System.out.println("- - - - - - - - -");
		ArreglosDinamicos.imprimeVector(v); /*esta linea truena en tiempo ejecucion
		 							por que String no es hijo de Integer para casting*/
	}

}
