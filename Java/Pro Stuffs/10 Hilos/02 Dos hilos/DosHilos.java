class Hilo extends Thread{
    private String textoImprimir;
    private long pausaEntreImpresiones;
    private int vecesImprimir;
    private int vecesQueHaImpreso;
    public static final int PAUSA_MILISEGUNDOS=2000;
    
    public Hilo(String textoImprimir,long pausaEntreImpresiones,int vecesImprimir){
        this.textoImprimir=textoImprimir;
        this.pausaEntreImpresiones=pausaEntreImpresiones;
        this.vecesImprimir=vecesImprimir;
    }
    
    public void run(){
        while(vecesQueHaImpreso<vecesImprimir){
            try{
                System.out.println(textoImprimir+","+vecesQueHaImpreso);
                sleep(pausaEntreImpresiones);
            }catch(InterruptedException e){
                e.printStackTrace(System.err);
            }
            vecesQueHaImpreso++;
        }
    }
    
    public boolean estaTrabajando(){
    	return vecesQueHaImpreso<vecesImprimir;
    }
}

public class DosHilos{
    public static final int PAUSA_MAIN_MILISEGUNDOS=1000;
    
    public static void main(String args[]){
        Hilo hi=new Hilo("Hola",Hilo.PAUSA_MILISEGUNDOS,5);
        int i=0;
        hi.start();
        while(hi.estaTrabajando()){
            try{
                System.out.println("main,"+i);
                Thread.sleep(PAUSA_MAIN_MILISEGUNDOS);
            }catch(InterruptedException e){
                e.printStackTrace(System.err);
            }
            i++;
        }
    }
}
