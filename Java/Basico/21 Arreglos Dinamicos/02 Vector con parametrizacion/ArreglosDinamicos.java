import java.util.Vector;

public class ArreglosDinamicos {

	public static void imprimeVector(Vector<String> v){
		String s;
		for(int i=0;i<v.size();i++){
			s=v.get(i);
			System.out.println(s);
		}
		System.out.println("- - - - - - - - - -");
	}
	
	public static void main(String[] args) {
		Vector<String> v=new Vector<String>();
		//Vector<Object> v=new Vector<Object>();
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
		//v.add(new Integer(10)); //no compila por parametrizacion
	}

}
