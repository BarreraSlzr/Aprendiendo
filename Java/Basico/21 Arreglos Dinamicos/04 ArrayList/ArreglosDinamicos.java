import java.util.ArrayList;

public class ArreglosDinamicos {

	public static void imprimeLista(ArrayList<String> v){
		for(int i=0,j=v.size();i<j;i++){
			System.out.println(v.get(i));
		}
		System.out.println("- - - - - - - - - -");
	}
	
	public static void main(String[] args) {
		ArrayList<String> v=new ArrayList<String>();
		//ArrayList<Object> v=new ArrayList<Object>();
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
		ArreglosDinamicos.imprimeLista(v);
		v.remove(1);
		ArreglosDinamicos.imprimeLista(v);
		v.remove(2);
		ArreglosDinamicos.imprimeLista(v);
		//v.add(new Integer(10)); //no compila por parametrizacion
	}

}
