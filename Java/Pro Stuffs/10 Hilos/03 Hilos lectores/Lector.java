
public class Lector extends Thread{
	private RecursoCritico recursoCritico;
	private int id;
	
	public Lector(RecursoCritico rc,int id){
		recursoCritico=rc;
		this.id=id;
	}
	
	public void run(){
		char c;
		while(true){
			c=recursoCritico.leer();
			System.out.println("id="+id+", dato="+c);
			if (c==RecursoCritico.CARACTER_PARO){
				break;
			}
		}
	}
}
