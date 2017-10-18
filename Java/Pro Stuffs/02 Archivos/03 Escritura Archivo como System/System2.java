import java.io.*;

public class System2 {
	//Crear objeto File
	private static File archivo=new File("MiArchivo.txt");
	public static BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
	public static PrintWriter out;
	
	static{
		try{
			out=new PrintWriter(new FileWriter(archivo));
		}catch(IOException e){
			System.out.println("no se inicializo PrintWriter");
		}
	}

	public static void main(String[] args) {
		
		try{
			//Crear un buffered reader para leer cada linea de la entrada estandar
			//Crear un print writer sobre el archivo
			String s;
			
			System.out.println("Escribe texto para archivo.");
			System.out.println("Para terminar, en Unix Ctrl-d o Ctrl-c, Windows Ctrl-c o Ctrl-z ó en ambos escribir caracter #");
			//leer cada linea de la consola y escribirla en archivo
			while((s=System2.in.readLine())!=null){
				if (!s.equals("#")){
					System2.out.println(s);
				}
				else break;
			}
			
			//Cerrar el buffered reader y el file print writer
			in.close();
			out.close();
		}catch(IOException e){
			//atrapar cualquier error de e/s
			e.printStackTrace(System.err);
		}
	}
}
