public class LecturaEscritura {
	public static final int MILISEG_DE_TRABAJO=1000;

	public static void main(String[] args) {
		RecursoCritico rc=new RecursoCritico(MILISEG_DE_TRABAJO);
		LectorEscritor h1=new LectorEscritor(rc,1);
		LectorEscritor h2=new LectorEscritor(rc,2);
		h1.start();
		h2.start();
	}
}
