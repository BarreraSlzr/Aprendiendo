public class HilosLectores {
	public static final int MILISEGUNDOS_TRABAJO=0;

	public static void main(String[] args) {
		RecursoCritico rc=new RecursoCritico(MILISEGUNDOS_TRABAJO);
		Lector h1=new Lector(rc,1);
		Lector h2=new Lector(rc,2);
		h1.start();
		h2.start();
	}

}
