import java.util.ArrayList;

public class UsaLista {

	public static void main(String[] args) {
		ClaseAdministradora admin=new ClaseAdministradora();
		Materia tupla;
		admin.alta("I0001","Programaci�n");
		admin.alta("I0002","Seminario de Soluci�n de Problemas de Programaci�n");
		tupla=admin.consulta(1);  //asumo que existe el objeto en indice 1
		System.out.println("invocando a Materia.dameInfo()");
		System.out.println(tupla.dameInfo());
		System.out.println("invocando a tupla.toString()");
		System.out.println(tupla);
		System.out.println("otra vez invocando a tupla.toString()");
		System.out.println("registro: "+tupla);//equivalente a tupla.toString()
		admin.alta("I0003","Estructuras de Datos I");
		admin.alta("I0004","Seminario de Soluci�n de Problemas de Estructuras de Datos I");
		System.out.println("invocando a ClaseAdministradora.dameInfo()");
		System.out.println(admin.dameInfo());
		System.out.println("Intentando eliminar I0004...");
		if (admin.baja("I0004")){
			System.out.println(admin.dameInfo());
		}
		else{
			System.out.println("No se pudo eliminar");
		}
		System.out.println("intentando eliminar algo eliminado");
		if (admin.baja("I0004")){
			System.out.println(admin.dameInfo());
		}
		else{
			System.out.println("No se pudo eliminar");
		}
		
		tupla=admin.consulta(10);
		//tupla=admin.consulta(1);
		System.out.println(tupla);
		if(tupla!=null)//cuidado si es posible que sea null y no se usa if
			System.out.println("nombre: "+tupla.nombre);
	}

}

class Materia{
	public String clave;
	public String nombre;
	
	public Materia(String clave,String nombre){
		this.clave=clave;
		this.nombre=nombre;
	}
	
	//este m�todo ya se explic� como funciona
	public String dameInfo(){
		String s;
		s=clave+"\t"+nombre;
		return s;
	}
	
	//y que tal si se sobreescribiendo este m�todo heredado de la clase Object?
	public String toString(){
		String s;
		s=clave+"\t"+nombre;
		return s;
	}
}

class ClaseAdministradora{
	private ArrayList<Materia> lista;

	public ClaseAdministradora(){
		lista=new ArrayList<Materia>();
	}
	
	public void alta(String clave,String nombre){
		Materia m;
		m=new Materia(clave,nombre);
		lista.add(m);
		/* se podr�a usar
		 * lista.add(posicion,m);
		 * para dar de alta en orden por clave
		 */
	}  //el m�todo podr�a regresar boolean para saber si se agreg� de no admitir repetidos por clave
	
	/*
	 * podr�a haber un m�todo:
	public int alta(String clave,String nombre,int posicion)
	que devolviera el �ndice donde se insert� el elemento
	*/
	
	/* se podr�a implementar un m�todo:
	 * public void alta(String clave,String nombre,int posicion)
	 * sin embargo si me dicen la posici�n le estoy dando conocimiento
	 * al exterior de como funciono yo en mi interior
	 */
	
	public Materia consulta(int posicion){
		Materia m;
		if (0<=posicion && posicion<lista.size()){
			m=lista.get(posicion);
		}
		else{
			m=null;
		}
		return m;
	}
	
	/*podr�a implementarse un m�todo:
	 * public Materia consulta(String clave);
     */
	
	public boolean baja(String clave){
		boolean encontro=false;  //hay casos donde con cuidado declarar y definir una variable en una misma l�nea
		int i,j;
		Materia m;		
		for(i=0,j=lista.size();i<j;i++){
			m=lista.get(i);
			if (m.clave.equals(clave)){
				lista.remove(i);
				encontro=true;
				break;
			}
			//else seguir buscando
		}
		return encontro;
	}
	
	/* podr�a implementarse un m�todo:
	 * public boolean baja(int posicion);
	 */
	
	public String dameInfo(){
		String s="";
		Materia m;
		int i,j;
		for(i=0,j=lista.size();i<j;i++){
			m=lista.get(i);
			s+=m.dameInfo()+"\n";
			// y que tal si comentara la l�nea anterior? y codificara...
			//s+=m+"\n";
			//funciona igual?
		}
		return s;
	}
	
	//ser�a bueno en lugar de dameInfo() sobreescribir toString()?
}
