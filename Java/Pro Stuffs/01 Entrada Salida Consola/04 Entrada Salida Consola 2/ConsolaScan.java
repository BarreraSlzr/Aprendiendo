import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class ConsolaScan {
	
	private static InputStreamReader ir=new InputStreamReader(System.in);
	private static BufferedReader in=new BufferedReader(ir);
	
	public int leerInt(int valorPorDefecto){
		String s;
		int valor;
		try{
			s=in.readLine();
			if(s!=null && !s.equals("")){
				valor=Integer.parseInt(s);//se pueden hacer otros metodos como Double.parseDouble(s) 
			}
			else{
				valor=valorPorDefecto;
			}
		}catch(IOException e){
			System.out.println("Se lanzo IOException:");
			e.printStackTrace(System.err);  //es a decision si se imprime o no en consola
			valor=valorPorDefecto;  //se usa valorPorDefecto en caso de error
		}catch(NumberFormatException e){
			System.out.println("Se lanzo NumberFormatException:");
			e.printStackTrace(System.err);
			valor=valorPorDefecto;  //la subrutina invocante verificaria por este valor
		}
		return valor;
	}
	
	public void cerrar(){
		try{
			in.close();
		}catch(IOException e){
			e.printStackTrace(System.err);
		}
	}

	public static void main(String[] args) {
		ConsolaScan cs=new ConsolaScan();
		int a;
		System.out.print("Dame el valor de a: ");
		a=cs.leerInt(-1);
		System.out.println("a="+a);
		cs.cerrar();
	}

}
