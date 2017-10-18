class Productor extends Thread {
	private Tuberia tuberia;
	private String alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	public Productor( Tuberia t ) {
		// Mantiene una referencia hacia el objeto compartido
		tuberia = t;
	}

	public void run() {
		char c;

		// Mete 10 letras en la tuber�a
		for( int i=0; i < 10; i++ )
		{
			c = alfabeto.charAt( (int)(Math.random()*26 ) );
			tuberia.lanzar( c );
			// Imprime un registro con lo a�adido
			System.out.println( "Lanzado "+c+" a la tuberia." );
			// Espera un poco antes de a�adir m�s letras
			try {
				sleep( (int)(Math.random() * 100 ) );
			} catch( InterruptedException e ) {
				;
			}
		}
	}
}

class Consumidor extends Thread {
	private Tuberia tuberia;

	public Consumidor( Tuberia t ) {
		// Mantiene una referencia hacia el objeto compartido
		tuberia = t;
	}

	public void run() {  //receive
		char c;

		// Consume 10 letras de la tuber�a
		for( int i=0; i < 10; i++ )
		{
			c = tuberia.recoger();
			// Imprime las letras retiradas
			System.out.println( "Recogido el caracter "+c );
			// Espera un poco antes de coger m�s letras
			try {
				sleep( (int)(Math.random() * 2000 ) );
			} catch( InterruptedException e ) {
				;
			}
		}
	}
}

class Tuberia {
	private char buffer[] = new char[6];
	private int siguiente = 0;
	// Flags para saber el estado del buffer
	private boolean estaLlena = false;
	private boolean estaVacia = true;

	// M�todo para retirar letras del buffer
	public synchronized char recoger() {
		// No se puede consumir si el buffer est� vac�o
		while( estaVacia == true )//rebusnancia?
		{
			try {
				wait(); // Se sale cuando estaVacia cambia a false
			} catch( InterruptedException e ) {
				;
			}
		}
		// Decrementa la cuenta, ya que va a consumir una letra
		siguiente--;
		// Comprueba si se retir� la �ltima letra
		if( siguiente == 0 )
			estaVacia = true;
		// El buffer no puede estar lleno, porque acabamos de consumir
		estaLlena = false;
		notify();

		// Devuelve la letra al thread consumidor
		return( buffer[siguiente] );
	}

	// M�todo para a�adir letras al buffer
	public synchronized void lanzar( char c ) {
		// Espera hasta que haya sitio para otra letra
		while( estaLlena == true )
		{
			try {
				wait(); // Se sale cuando estaLlena cambia a false
			} catch( InterruptedException e ) {
				;
			}
		}
		// A�ade una letra en el primer lugar disponible
		buffer[siguiente] = c;
		// Cambia al siguiente lugar disponible
		siguiente++;
		// Comprueba si el buffer est� lleno
		if( siguiente == 6 )
			estaLlena = true;
		estaVacia = false;
		notify();
	}
}

public class TubTest {
	public static void main( String args[] ) {
		Tuberia t = new Tuberia();
		Productor p = new Productor( t );
		Consumidor c = new Consumidor( t );

		p.start();
		c.start();
	}
}
