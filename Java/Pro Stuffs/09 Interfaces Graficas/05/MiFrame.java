import java.awt.Frame;

public class MiFrame extends Frame{
	public static final long serialVersionUID=1;
	private final int PIXELES_ALTO=300;
	private final int PIXELES_ANCHO=440;

	public MiFrame(){
		super("Interfaces Graficas");
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
	}

	public static void main(String args[]){
		MiFrame mf=new MiFrame();
		mf.setVisible(true);
	}
}
