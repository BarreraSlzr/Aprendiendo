public class RecursoCritico {
	public static final char CARACTER_PARO='_';
	private static final int PROPORCION_TIEMPO_ESCRITURA=2;
	private String datos="ABCDEFGHIJKL";
	private int milisegundosTrabajo;
	
	public RecursoCritico(int milisegundosTrabajo){
		this.milisegundosTrabajo=milisegundosTrabajo;
	}
	
	public void pausar(int milisegundos){
		try{
			Thread.sleep(milisegundos);
		}catch(InterruptedException e){
			e.printStackTrace(System.out);
		}
	}
	
	public synchronized char leer(){
		char c;
		pausar(milisegundosTrabajo);
		if (datos.length()>0){
			c=datos.charAt(0);
			datos=datos.substring(1);
		}
		else{
			c=CARACTER_PARO;
		}
		return c;
	}
	
	public synchronized void escribir(char c){
		pausar(milisegundosTrabajo*PROPORCION_TIEMPO_ESCRITURA);
		datos+=c;
	}
}
