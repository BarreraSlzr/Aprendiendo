import java.io.*;
import java.util.ArrayList;

public class Serializacion {

	public static void main(String[] args) {
		Administradora adm=new Administradora("Personas.dat");
		if (adm.cargaDatos()){
			System.out.println("Sí encontró el archivo");
		}
		else{
			System.out.println("Se creará archivo nuevo");
			adm.agregaPersona("Luis", "CUCEI", 1234567);
			adm.agregaPersona("Alberto", "CINVESTAV", 2345678);
			adm.guardaDatos();
		}
		adm.despliegaDatos();
		System.out.println("Y si uso el toString() de la Administradora:");
		System.out.println(adm);
	}
}

class Administradora{
	private ArrayList<Persona> lista;
	private String nombreArchivo;

	public Administradora(String nombreArchivo){
		this.nombreArchivo=nombreArchivo;
		lista=new ArrayList<Persona>();
	}

	public void agregaPersona(String nombre,String domicilio,int telefono){
		Persona p=new Persona(nombre,domicilio,telefono);
		lista.add(p);
	}

	public void guardaDatos(){
		try{
			FileOutputStream fos = new FileOutputStream(nombreArchivo);
			ObjectOutputStream oos = new ObjectOutputStream(fos);
			oos.writeObject(lista);
			oos.close();
		}catch(FileNotFoundException e){
			e.printStackTrace(System.err);
		}catch(IOException e){
			e.printStackTrace(System.err);
		}
	}

	@SuppressWarnings("unchecked")
	public boolean cargaDatos(){
		boolean cargo=false;
		try{
			FileInputStream fis = new FileInputStream(nombreArchivo);
			ObjectInputStream ois = new ObjectInputStream(fis);
			lista=(ArrayList<Persona>)ois.readObject();
			ois.close();
			cargo=true;
		}catch(FileNotFoundException e){
			e.printStackTrace(System.err);  /*quizás sea bueno comentar esta instrucción
	         						debido a que es algo que sí es loable que
	         						ocurra una primera vez*/
		}catch(IOException e){
			e.printStackTrace(System.err);
		}catch(ClassNotFoundException e){
			e.printStackTrace(System.err);
		}
		return cargo;
	}

	public void despliegaDatos(){
		int i,j=lista.size();
		Persona p;

		for(i=0;i<j;i++){
			p=(Persona)lista.get(i);
			System.out.println(p);
		}
	}

	public String toString(){
		int i,j=lista.size();
		Persona p;
		StringBuffer sb=new StringBuffer();

		for(i=0;i<j;i++){
			p=(Persona)lista.get(i);
			sb.append(p.toString()+"\n");
		}
		return sb.toString();
	}
}

class Persona implements Serializable{
	private static final long serialVersionUID=1;
	public String nombre;
	public String domicilio;
	public int telefono;

	public Persona(String nombre,String domicilio,int telefono){
		this.nombre=nombre;
		this.domicilio=domicilio;
		this.telefono=telefono;
	}

	public String toString(){
		return nombre+"\t"+domicilio+"\t"+telefono;
	}
}