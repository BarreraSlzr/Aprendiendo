/* Definimos unos sencillos threads. Se detendrán un rato
   antes de imprimir sus nombres y retardos */

class HiThread extends Thread {
	public static final int RETARDO=2000;
	private String nombre;
	private int retardo;

	public HiThread( String name,int delay ) {
		nombre = name;
		retardo = delay;
	}

	/* El método run() es similar al main(), pero para
	 threads. Cuando run() termina el thread muere */
	public void run() {
		try {
			sleep( retardo );
		} catch( InterruptedException e ) {
			;
		}
		System.out.println( "Hola Mundo! "+nombre+" "+retardo );
	}
}

public class MultiHola {
	public static void main( String args[] ) {
		HiThread t1,t2,t3;

		// Creamos los threads
		t1 = new HiThread( "Thread 1",(int)(Math.random()*HiThread.RETARDO) );
		t2 = new HiThread( "Thread 2",(int)(Math.random()*HiThread.RETARDO) );
		t3 = new HiThread( "Thread 3",(int)(Math.random()*HiThread.RETARDO) );

		// Arrancamos los threads
		t1.start();
		t2.start();
		t3.start();
		// Que pasa si comentas las 3 anteriores y descomentas las siguientes?
		/*t1.run();
		t2.run();
		t3.run();*/
		System.out.println("main ya termino");
	}
}
