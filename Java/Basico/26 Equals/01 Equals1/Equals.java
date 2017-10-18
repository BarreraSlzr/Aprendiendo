
public class Equals {
	
	public static void comparaString(){
		String cad1="Luis";//Strings son inmutables
		String cad2="Alberto";
		String cad3="LUIS";
		String cad4="Luis";
		System.out.println("---comparaString()---");
		if (cad1==cad1){
			System.out.println("cad1 y cad1 son el mismo objeto");
		}
		else{
			System.out.println("cad1 y cad1 son objetos distintos");
		}
		if (cad1==cad4){
			System.out.println("cad1 y cad4 son el mismo objeto");
		}
		else{
			System.out.println("cad1 y cad4 son objetos distintos");
		}
	}
	
	public static void comparaNewString(){
		String cad1=new String("Luis");
		String cad2=new String("Alberto");
		String cad3=new String("LUIS");
		String cad4=new String("Luis");
		System.out.println("---comparaNewString()---");
		if (cad1==cad1){
			System.out.println("cad1 y cad1 son el mismo objeto");
		}
		else{
			System.out.println("cad1 y cad1 son objetos distintos");
		}
		if (cad1==cad4){
			System.out.println("cad1 y cad4 son el mismo objeto");
		}
		else{
			System.out.println("cad1 y cad4 son objetos distintos");
		}
	}
	
	public static void comparaObject(){
		Object obj1=new Object();
		Object obj2=new Object();
		Object obj3=new Object();
		Object obj4=new Object();
		Object obj5=obj1;
		System.out.println("---comparaObject()---");
		if (obj1==obj1){
			System.out.println("obj1 y obj1 son el mismo objeto");
		}
		else{
			System.out.println("obj1 y obj1 son objetos distintos");
		}
		if (obj1==obj4){
			System.out.println("obj1 y obj4 son el mismo objeto");
		}
		else{
			System.out.println("obj1 y obj4 son objetos distintos");
		}
		if (obj1==obj5){
			System.out.println("obj1 y obj5 son el mismo objeto");
		}
		else{
			System.out.println("obj1 y obj5 son objetos distintos");
		}
	}
	
	public static void comparaStringConEquals(){
		String cad1=new String("Luis");
		String cad2=new String("Alberto");
		String cad3=new String("LUIS");
		String cad4=new String("Luis");
		System.out.println("---comparaStringConEquals()---");
		if (cad1.equals(cad1)){
			System.out.println("cad1 y cad1 tienen los mismos caracteres y longitud");
		}
		else{
			System.out.println("cad1 y cad1 NO tienen los mismos caracteres y longitud");
		}
		if (cad1.equals(cad2)){
			System.out.println("cad1 y cad2 tienen los mismos caracteres y longitud");
		}
		else{
			System.out.println("cad1 y cad2 NO tienen los mismos caracteres y longitud");
		}
		if (cad1.equals(cad4)){
			System.out.println("cad1 y cad4 tienen los mismos caracteres y longitud");
		}
		else{
			System.out.println("cad1 y cad4 NO tienen los mismos caracteres y longitud");
		}
	}
	
	public static void comparaStringConEqualsIgnoraCaso(){
		String cad1="Luis";
		String cad2="Alberto";
		String cad3="LUIS";
		String cad4="Luis";
		System.out.println("---comparaStringConEqualsIgnoraCaso()---");
		if (cad1.equalsIgnoreCase(cad1)){
			System.out.println("cad1 y cad1 tienen los mismos caracteres y longitud ignorando mayusculas");
		}
		else{
			System.out.println("cad1 y cad1 NO tienen los mismos caracteres y longitud ignorando mayusculas");
		}
		if (cad1.equalsIgnoreCase(cad3)){
			System.out.println("cad1 y cad3 tienen los mismos caracteres y longitud ignorando mayusculas");
		}
		else{
			System.out.println("cad1 y cad3 NO tienen los mismos caracteres y longitud ignorando mayusculas");
		}
	}
	
	public static void main(String args[]){
		comparaString();
		comparaNewString();
		comparaObject();
		comparaStringConEquals();
		comparaStringConEqualsIgnoraCaso();
	}
}
