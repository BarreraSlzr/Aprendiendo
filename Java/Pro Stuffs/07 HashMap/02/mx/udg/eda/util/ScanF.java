package mx.udg.eda.util;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ScanF {
	private static final int INT=1;
	private static final int FLOAT=2;
	private static final int DOUBLE=3;
	private static final int CHAR=4;
	private static final int STRING=5;
	private static int valorInt;
	private static float valorFloat;
	private static double valorDouble;
	private static char valorChar;
	private static String valorString;
	
	private static void leeConsola(int formato){
		InputStreamReader ir=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(ir);
		String s;
		int valorPorDefecto=0;
		try{
			s=in.readLine();
			if(s!=null && !s.equals("")){
				switch(formato){
				case INT:
					valorInt=Integer.parseInt(s);
					break;
				case FLOAT:
					valorFloat=Float.parseFloat(s);
					break;
				case CHAR:
					valorChar=s.charAt(0);
					break;
				case STRING:
					valorString=s;
					break;
				case DOUBLE:
					valorDouble=Double.parseDouble(s);
					break;
				default:
					System.out.println("Caso no contemplado");
				}
			}
			else{
				valorInt=valorPorDefecto;
				valorFloat=valorPorDefecto;
				valorChar=(char)valorPorDefecto;
			}
		}catch(IOException e){
			e.printStackTrace();		//es a decisi�n si se imprime o no en consola
			valorInt=valorPorDefecto;	//se usa valorPorDefecto en caso de error
			valorFloat=valorPorDefecto;
			valorChar=(char)valorPorDefecto;
		}catch(NumberFormatException e){
			e.printStackTrace();
			valorInt=valorPorDefecto;	//la subrutina invocante verificar�a por este valor
			valorFloat=valorPorDefecto;
			valorChar=(char)valorPorDefecto;
		}
	}

	public static int leeInt(){
		leeConsola(INT);
		return valorInt;
	}

	public static float leeFloat(){
		leeConsola(FLOAT);
		return valorFloat;
	}

	public static double leeDouble(){
		leeConsola(DOUBLE);
		return valorDouble;
	}

	public static char leeChar(){
		leeConsola(CHAR);
		return valorChar;
	}
	
	public static String leeString(){
		leeConsola(STRING);
		return valorString;
	}

	public static int leeEnteroInt(){
		InputStreamReader ir=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(ir);
		String s;
		int valor,valorPorDefecto;
		valorPorDefecto=0;
		try{
			s=in.readLine();
			if(s!=null && !s.equals("")){
				valor=Integer.parseInt(s);  //se pueden hacer otros m�todos como Double.parseDouble(s) 
			}
			else{
				valor=valorPorDefecto;
			}
			in.close();
		}catch(IOException e){
			e.printStackTrace();	//es a decisi�n si se imprime o no en consola
			valor=valorPorDefecto;	//se usa valorPorDefecto en caso de error
		}catch(NumberFormatException e){
			e.printStackTrace();
			valor=valorPorDefecto;	//la subrutina invocante verificar�a por este valor
		}
		return valor;
	}
}
