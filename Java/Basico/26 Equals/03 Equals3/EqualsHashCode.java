
public class EqualsHashCode {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Persona luis=new Persona("Luis","MUGL790912");  //comenta esta linea
		//Persona luis=new Persona("Luis Alberto","MUGL790912");//descomenta esta
		Persona alberto=new Persona("Luis Alberto","MUGL790912");
		if (luis.equals(alberto)){
			System.out.println("Son la misma persona");
		}
		else{
			System.out.println("Son personas distintas");
		}
	}

}

class Persona{
	private String nombre;
	private String rfc;
	
	public Persona(String nombre,String rfc){
		this.nombre=nombre;
		this.rfc=rfc;
	}
	
	public boolean equals(Object o){
		boolean resultado=false;
		if ((o!=null)&&(o instanceof Persona)){
			Persona p=(Persona)o;
			if (nombre.equals(p.nombre) && rfc.equals(p.rfc)){
				resultado=true;
			}
		}
		return resultado;
	}
	
	public int hashCode(){
		return nombre.hashCode()^rfc.hashCode();
	}
}
