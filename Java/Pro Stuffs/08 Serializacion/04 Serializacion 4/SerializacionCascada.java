import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.Vector;

public class SerializacionCascada{

	public static void main(String[] args) {
		AdministradoraDCC admin=new AdministradoraDCC();
		if (admin.cargaDatos()){
			System.out.println("Se cargaron datos de archivo ");
			System.out.println("Que pasa cuando intento agregar un grupo mas?");
			System.out.println("Que nrc le toca?");
			admin.agregaGrupo("CC103", 9528369);
		}
		else{
			System.out.println("Se creará archivo");
			admin.agregaProfesor(9528369, "Luis Alberto Casillas", "Republica 123", 3323456789L);
			admin.agregaProfesor(2233517, "Luis Alberto Muñoz", "Patria 456", 3312345678L);
			System.out.println(admin.listaProfesores());
			admin.agregaMateria("CC103", "Taller de Programacion Estructurada       ");
			admin.agregaMateria("CC201", "Taller de Programacion Orientada a Objetos");
			admin.agregaMateria("CC203", "Taller de Estructura de Datos             ");
			admin.agregaMateria("CC319", "Sistemas Operativos Avanzados             ");
			admin.agregaMateria("CC320", "Taller de Sistemas Operativos Avanzados   ");
			admin.agregaMateria("CC400", "Sistemas Expertos                         ");
			admin.agregaMateria("CC415", "Inteligencia Artificial                   ");
			admin.agregaMateria("CC422", "Topicos Selectos de Informatica III C#    ");
			System.out.println(admin.listaMaterias());
			admin.agregaGrupo("CC201", 9528369);
			admin.agregaGrupo("CC400", 9528369);
			admin.agregaGrupo("CC415", 9528369);
			admin.agregaGrupo("CC422", 9528369);
			admin.agregaGrupo("CC103", 2233517);
			admin.agregaGrupo("CC201", 2233517);
			admin.agregaGrupo("CC203", 2233517);
			admin.agregaGrupo("CC319", 2233517);
			admin.agregaGrupo("CC320", 2233517);
			System.out.println(admin.listaGrupos());
			System.out.println(admin.agregaGrupo("CC100",2233517)?"Grupo agregado":"No se pudo agregar el grupo");
			System.out.println(admin.agregaGrupo("CC320",1234567)?"Grupo agregado":"No se pudo agregar el grupo");
			System.out.println(admin.agregaGrupo("CC320",2233517)?"Grupo agregado":"No se pudo agregar el grupo");
			admin.guardaDatos();  //los atributos static no se serializan
		}
		System.out.println(admin);
	}

}

interface Constantes{
	public final String NOMBRE_ARCHIVO="CursosDCC.dat";
}

class AdministradoraDCC implements Constantes{
	private Vector<Profesor> profesores;
	private Vector<Materia> materias;
	private Vector<Grupo> grupos;
	
	public AdministradoraDCC(){
		profesores=new Vector<Profesor>();
		materias=new Vector<Materia>();
		grupos=new Vector<Grupo>();
	}
	
	public boolean agregaProfesor(int codigo,String nombre,String domicilio,
			long telefono){
		Profesor p=new Profesor(codigo,nombre,domicilio,telefono);
		profesores.add(p);
		return true;	//podria verificar unicidad de codigo y regresar false
	}
	
	public boolean agregaMateria(String clave,String nombre){
		Materia m=new Materia(clave,nombre);
		materias.add(m);
		return true;	//podria verificar unicidad de clave y regresar false
	}
	
	public boolean agregaGrupo(String claveMateria,int codigoProfesor){
		boolean encontro;
		Materia materia;
		Profesor profe;
		Grupo grupo;
		int i,j;
		encontro=false;
		materia=null;
		for(i=0,j=materias.size();i<j;i++){
			materia=materias.get(i);
			if (materia.dameClave().equals(claveMateria)){
				encontro=true;
				break;
			}
			//else asumo que voy a iterar mas de una vez
		}
		if (encontro){
			encontro=false;
			profe=null;
			for(i=0,j=profesores.size();i<j;i++){
				profe=profesores.get(i);
				if (profe.dameCodigo()==codigoProfesor){
					encontro=true;
					break;
				}
				//else asumo que voy a iterar mas de una vez
			}
			if (encontro){
				grupo=new Grupo(materia,profe);
				grupos.add(grupo);
			}
			//else no se puede crear el grupo sin profesor
		}
		//else no se puede crear el grupo sin materia
		return encontro;
	}
	
	public void guardaDatos(){
	    try{
	        FileOutputStream fos = new FileOutputStream(NOMBRE_ARCHIVO);
	        ObjectOutputStream oos = new ObjectOutputStream(fos);
	        oos.writeObject(profesores);
	        oos.writeObject(materias);
	        oos.writeObject(grupos);
	        oos.close();
	    }catch(FileNotFoundException e){
	        e.printStackTrace();
	    }catch(IOException e){
	        e.printStackTrace();
	    }
	}
	
	@SuppressWarnings("unchecked")
	public boolean cargaDatos(){
		boolean cargo=false;
	    try{
	        FileInputStream fis = new FileInputStream(NOMBRE_ARCHIVO);
	        ObjectInputStream ois = new ObjectInputStream(fis);
	        profesores=(Vector<Profesor>)ois.readObject();
	        materias=(Vector<Materia>)ois.readObject();
	        grupos=(Vector<Grupo>)ois.readObject();
	        ois.close();
	        cargo=true;
	        //y si descomentamos la siguiente?
	        //Grupo.fijaCuentaNRC(grupos.size());//aguas! si implementa operacion "eliminar" puede tener duplicidad de NRC
	    }catch(FileNotFoundException e){
	        /*e.printStackTrace();  /*quizás sea bueno comentar esta instrucción
	         						debido a que es algo que sí es loable que
	         						ocurra una primera vez*/
	    }catch(IOException e){
	        e.printStackTrace();
	    }catch(ClassNotFoundException e){
	        e.printStackTrace();
	    }
	    return cargo;
	}
	
	@SuppressWarnings("unchecked")
	private String dameLista(Vector lista){
		int i,j=lista.size();
		Object p;
		StringBuffer sb=new StringBuffer();
		
		for(i=0;i<j;i++){
			p=(Object)lista.get(i);
			sb.append(p.toString()+"\n");
		}
		return sb.toString();
	}
	
	public String listaProfesores(){
		return dameLista(profesores);
	}
	
	public String listaMaterias(){
		return dameLista(materias);
	}
	
	public String listaGrupos(){
		return dameLista(grupos);
	}
	
	public String toString(){
		StringBuffer sb=new StringBuffer();
		sb.append("Profesores:\n");
		sb.append(listaProfesores());
		sb.append("Materias:\n");
		sb.append(listaMaterias());
		sb.append("Grupos:\n");
		sb.append(listaGrupos());
		return sb.toString();
	}
}

interface Nombrable{
	public String dameNombre();
}

class Persona implements Nombrable,Serializable{
	private static final long serialVersionUID=1;
	private String nombre;
	private String domicilio;
	private long telefono;
	
	public Persona(String nombre,String domicilio,long telefono){
		this.nombre=nombre;
		this.domicilio=domicilio;
		this.telefono=telefono;
	}
	
	public String dameNombre(){
		return nombre;
	}
	
	public String toString(){
		return nombre+"\t"+domicilio+"\t"+telefono;
	}
}

class Profesor extends Persona{
	private static final long serialVersionUID=2;
	private int codigo;
	
	public Profesor(int codigo,String nombre,String domicilio,long telefono){
		super(nombre,domicilio,telefono);
		this.codigo=codigo;
	}
	
	public int dameCodigo(){
		return codigo;
	}
	
	public String toString(){
		return codigo+"\t"+super.toString();
	}
}

class Materia implements Nombrable,Serializable{
	private static final long serialVersionUID=3;
	private String clave;
	private String nombre;
	
	public Materia(String clave,String nombre){
		this.clave=clave;
		this.nombre=nombre;
	}
	
	public String dameClave(){
		return clave;
	}
	
	public String dameNombre(){
		return nombre;
	}
	
	public String toString(){
		return clave+"\t"+nombre;
	}
}

class Grupo implements Serializable{
	private static final long serialVersionUID=1;
	private static int cuentaNRC=0;  //este no se serializa
	private int nrc;
	private Materia materia;
	private Profesor profesor;
	
	public Grupo(Materia m,Profesor p){
		nrc=++cuentaNRC;
		System.out.println("ejecutando constructor Grupo le toca nrc: "+nrc);
		materia=m;
		profesor=p;
	}
	
	public static void fijaCuentaNRC(int ultimoNRC){
		cuentaNRC=ultimoNRC;
	}
	
	public String toString(){
		return nrc+"\t"+materia+"\t"+profesor.dameNombre(); 
	}
}