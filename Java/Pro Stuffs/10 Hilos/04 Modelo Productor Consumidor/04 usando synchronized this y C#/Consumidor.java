class Consumidor extends Thread {
	private BandejaCompartida tuberia;
	private int totalLetrasConsumir;
	private int milisegEsperaEntreComsumos;

	public Consumidor(BandejaCompartida t,int totalLetrasConsumir,
			int milisegEsperaEntreComsumos) {
		tuberia = t;//referencia hacia el objeto compartido con el Productor
		this.totalLetrasConsumir=totalLetrasConsumir;
		this.milisegEsperaEntreComsumos=milisegEsperaEntreComsumos;
	}

	public void run(){
		for(int i=0;i<totalLetrasConsumir;i++){
			System.out.println("Recogido el caracter "+tuberia.obtenerCaracter());
			try{
				sleep((int)(Math.random()*milisegEsperaEntreComsumos));
			}catch(InterruptedException e){
				;
			}
		}
	}
}

