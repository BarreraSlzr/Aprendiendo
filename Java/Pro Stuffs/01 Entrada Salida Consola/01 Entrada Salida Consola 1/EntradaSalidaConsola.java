
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class EntradaSalidaConsola {

	public static void main(String args[]){
		String s;
		//crear un lector de bufer para leer cada linea del teclado
		InputStreamReader ir=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(ir);
		System.out.println(
			"Para terminar, en Unix Ctrl-d ó Ctrl-c, Windows Ctrl-c o Ctrl-z; o bien solo Enter");
		try{
			//Leer cada línea de entrada y hacer eco a la consola
			s=in.readLine();
			while(s!=null && !s.equals("")){
				System.out.println("Leer: "+s);
				s=in.readLine();
			}
			//Cerrar el BufferedReader
			in.close();
			System.out.println("termine");
		}catch(IOException e){  //Atrapar cualquier IOException
			e.printStackTrace(System.err);
		}
	}
}
