import java.util.Vector;


public class Eficiencia {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Vector<Persona> v=new Vector<Persona>();
		Persona p;
		int i,j;
		for(i=0;i<10;i++){
			/*p=new Persona("MUGL"+i);
			v.add(p);
			 */
			v.add(new Persona("MUGL"+i));
		}
		
		//cual es mas eficiente de los siguientes dos (razones)?
		for(i=0;i<v.size();i++){
			p=v.get(i);
			System.out.println(p.dameRFC());
		}
		
		/*for(i=0,j=v.size();i<j;i++){
			System.out.println(v.get(i).dameRFC());
		}*/
		
	}

}

class Persona{
	private String rfc;
	
	public Persona(String rfc){
		this.rfc=rfc;
	}
	
	public String dameRFC(){
		return rfc;
	}
}