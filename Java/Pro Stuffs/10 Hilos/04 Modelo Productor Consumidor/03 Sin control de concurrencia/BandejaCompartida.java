class BandejaCompartida {
	public static final int TAMANO_BUFFER=6;
	private final int PRIMERA_POSICION_ESCRIBIBLE=0;
	private char buffer[]=new char[TAMANO_BUFFER];
	private int siguientePosicionEscribir;
	private boolean bufferLleno;
	private boolean bufferVacio=true;

	//Retira caracteres del buffer
	public char obtenerCaracter() {
		while(bufferVacio);
		siguientePosicionEscribir--;
		if(siguientePosicionEscribir==PRIMERA_POSICION_ESCRIBIBLE)
			bufferVacio=true;
		bufferLleno=false;//se esta retirando un caracter
		return(buffer[siguientePosicionEscribir]);//caracter retirado
	}

	//Agrega caracteres al buffer
	public void agregaCaracter(char c){
		while(bufferLleno);
		buffer[siguientePosicionEscribir] = c;
		siguientePosicionEscribir++;
		if(siguientePosicionEscribir==TAMANO_BUFFER)
			bufferLleno=true;
		bufferVacio=false;
	}
}