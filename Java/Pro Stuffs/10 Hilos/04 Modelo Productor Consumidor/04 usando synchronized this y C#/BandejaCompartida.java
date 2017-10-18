class BandejaCompartida {
	//para C#:"https://msdn.microsoft.com/en-us/library/aa645740%28v=vs.71%29.aspx#vcwlkthreadingtutorialexample2synchronizing"
	public static final int TAMANO_BUFFER=6;
	private final int PRIMERA_POSICION_ESCRIBIBLE=0;
	private char buffer[]=new char[TAMANO_BUFFER];
	private int siguientePosicionEscribir;
	private boolean bufferLleno;
	private boolean bufferVacio=true;
	//private Object obj=new Object();//"obj" seria una variable de condicion

	//Retira caracteres del buffer
	public char obtenerCaracter() {
		synchronized(this){//en C# es "lock(this){"
		//synchronized(obj){//en C# es "lock(obj){"
			while(bufferVacio){
				try{
					this.wait();//en C# es "Monitor.Wait(this)"
					//obj.wait();//en C# es "Monitor.Wait(this)"
				}catch(InterruptedException e){
					;
				}
			}
			siguientePosicionEscribir--;
			if(siguientePosicionEscribir==PRIMERA_POSICION_ESCRIBIBLE)
				bufferVacio=true;
			bufferLleno=false;//se esta retirando un caracter
			this.notify();//en C# es "Monitor.Pulse(this)"
			//obj.notify();//en C# es "Monitor.Pulse(obj)"
			return(buffer[siguientePosicionEscribir]);//caracter retirado
		}//en C# "}"
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