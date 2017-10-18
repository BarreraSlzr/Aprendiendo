class RecursoCritico{
	private String datos="ABCDEFGHIJKL";
	private int milisegundosTrabajo;
	public static final char CARACTER_PARO='_';
	
	public RecursoCritico(int milisegundosTrabajo){
		this.milisegundosTrabajo=milisegundosTrabajo;
	}
	
	public synchronized char leer(){
	//public char leer(){//que pasa sin control de concurrencia?
		char c;
		try{
			Thread.sleep(milisegundosTrabajo);
		}catch(InterruptedException e){
			e.printStackTrace(System.out);
		}
		if (datos.length()>0){
			c=datos.charAt(0);
			datos=datos.substring(1);
		}
		else{
			c=CARACTER_PARO;
		}
		return c;
	}
}
