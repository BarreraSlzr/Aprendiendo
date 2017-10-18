public class LectorEscritor extends Thread{
	public static final int MAX_LETRAS_ALFABETO=26;
	public static final int ASCII_A=65;
	private RecursoCritico recursoCritico;
	private int id;
	
	public LectorEscritor(RecursoCritico rc,int id){
		recursoCritico=rc;
		this.id=id;
	}
	
	public void run(){
		char c;
		while(true){
			c=recursoCritico.leer();
			System.out.println("id="+id+", obtuvo="+c);
			if (c==RecursoCritico.CARACTER_PARO){
				recursoCritico.escribir(c=(char)(Math.random()*MAX_LETRAS_ALFABETO+ASCII_A));
				System.out.println("id="+id+", escribio="+c);
			}
		}
	}
}
