public class Productor extends Thread {
	private BandejaCompartida tuberia;
	private String alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	private int totalLetrasProducir;
	private int milisegEsperaEntreProducciones;

	public Productor(BandejaCompartida t,int totalLetrasProducir,
			int milisegEsperaEntreProducciones){
		tuberia=t;//referencia hacia el objeto compartido con el Consumidor
		this.totalLetrasProducir=totalLetrasProducir;
		this.milisegEsperaEntreProducciones=milisegEsperaEntreProducciones;
	}

	public void run(){
		char c;
		for(int i=0,totalCaracteres=alfabeto.length();i<totalLetrasProducir;i++){
			tuberia.agregaCaracter(c=alfabeto.charAt((int)(Math.random()*totalCaracteres)));
			System.out.println( "Lanzado "+c+" a la tuberia." );
			try{
				sleep((int)(Math.random()*milisegEsperaEntreProducciones));
			}catch(InterruptedException e){
				;
			}
		}
	}
}
