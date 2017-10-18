import java.io.*;

public class LecturaArchivo {

	public static void main(String[] args) {
		//String nombreArchivo="eda2.txt"; //nombre de archivo simple
		//ruta relativa
		//String nombreArchivo="."+File.separator+"files"+File.separator+"eda2.txt";
		//ruta absoluta (Windows):
		String nombreArchivo="C:\\Users\\Luis Alberto\\workspaceLuna\\TestEDA2\\bin\\"+ 
			File.separator+"files"+File.separator+"eda2.txt";  
		/*String nombreArchivo="/home/alberto/test/java"+ //ruta absoluta (Linux)
			File.separator+"files"+File.separator+"eda2.txt";*/
		//Crear objeto File
		File archivo=new File(nombreArchivo);
		try{
			//Crear el reader para leer cada linea del archivo
			BufferedReader in=new BufferedReader(new FileReader(archivo));
			String s;
			
			//Leer cada linea del archivo y hacer eco a la consola
			System.out.println("Abriendo archivo: "+nombreArchivo);
			s=in.readLine();
			while(s!=null){
				System.out.println("Leer: "+s);
				s=in.readLine();
			}
			//Cerrar el buffered reader, lo que tambien cierra el file reader
			in.close();
		}catch(FileNotFoundException e){
			//Si el archivo no existe
			System.err.println("Archivo no se encontro: "+archivo);
			e.printStackTrace(System.err);//que pasa si borras el archivo
		}catch(IOException e){
			//Atrapar cualquier otra excepción
			e.printStackTrace(System.err);
		}
	}

}
