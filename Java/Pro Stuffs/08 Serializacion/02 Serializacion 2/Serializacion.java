import java.io.*;

public class Serializacion {
	public static void main(String[] args) {
		Persona[] personasAntes=new Persona[2];
		Persona[] personasDespues;
		byte[] bytes;
		personasAntes[0]=new Persona("Luis","mi caaasa",123);
		personasAntes[1]=new Persona("Alberto","aquí mismo",456);
		bytes=ByteArraySerializer.serialize(personasAntes);
		personasDespues=(Persona[])ByteArraySerializer.deserialize(bytes);
        for(int i=0,j=personasDespues.length;i<j;i++){
        	System.out.println(personasDespues[i]);
        }
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