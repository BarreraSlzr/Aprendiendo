class BandejaCompartida {
	public static final int TAMANO_BUFFER=6;
	private final int PRIMERA_POSICION_ESCRIBIBLE=0;
	private char buffer[]=new char[TAMANO_BUFFER];
	private int siguientePosicionEscribir;
	private boolean bufferLleno;
	private boolean bufferVacio=true;

	//Retira caracteres del buffer
	public synchronized char obtenerCaracter() {
		while(bufferVacio){
			try{
				wait();//no se puede consumir, entonces esperar
			}catch(InterruptedException e){
				;
			}
		}
		siguientePosicionEscribir--;
		if(siguientePosicionEscribir==PRIMERA_POSICION_ESCRIBIBLE)
			bufferVacio=true;
		bufferLleno=false;//se esta retirando un caracter
		notify();//avisarle al otro hilo que ya hay espacio
		return(buffer[siguientePosicionEscribir]);//caracter retirado
	}

	//Agrega caracteres al buffer
	public synchronized void agregaCaracter(char c){
		while(bufferLleno){
			try{
				wait();//no se puede producir, entonces esperar
			}catch(InterruptedException e){
				;
			}
		}
		buffer[siguientePosicionEscribir] = c;
		siguientePosicionEscribir++;
		if(siguientePosicionEscribir==TAMANO_BUFFER)
			bufferLleno=true;
		bufferVacio=false;
		notify();//avisar al otro hilo que ya hay algo que consumir
	}
}