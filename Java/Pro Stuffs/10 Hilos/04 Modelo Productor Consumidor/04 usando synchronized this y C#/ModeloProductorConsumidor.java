class ModeloProductorConsumidor {
	public static final int TOTAL_LETRAS_PROCESAR=10;
	public static final int MILISEG_ESPERA_PRODUCTOR=100;
	public static final int MILISEG_ESPERA_CONSUMIDOR=2000;
	
	public static void main( String args[] ) {
		BandejaCompartida t=new BandejaCompartida();
		Productor p=new Productor(t,TOTAL_LETRAS_PROCESAR,MILISEG_ESPERA_PRODUCTOR);
		Consumidor c=new Consumidor(t,TOTAL_LETRAS_PROCESAR,MILISEG_ESPERA_CONSUMIDOR);
		p.start();
		c.start();
	}
}
