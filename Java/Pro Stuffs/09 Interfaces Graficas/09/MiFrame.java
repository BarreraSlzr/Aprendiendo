import java.awt.Frame;
import java.awt.event.WindowListener;
import java.awt.event.WindowEvent;

public class MiFrame extends Frame{
	public static final long serialVersionUID=1;
	private final int PIXELES_ALTO=300;
	private final int PIXELES_ANCHO=440;

	public MiFrame(){
		super("Interfaces Graficas");
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		ManejadorVentana mv=new ManejadorVentana();
		addWindowListener(mv);
	}

	private class ManejadorVentana implements WindowListener{

		public void windowClosing(WindowEvent e){
			System.exit(0);
		}

		public void windowActivated(WindowEvent e){
		}
		public void windowClosed(WindowEvent e){
		}
		public void windowDeactivated(WindowEvent e){
		}
		public void windowDeiconified(WindowEvent e){
		}
		public void windowIconified(WindowEvent e){
		}
		public void windowOpened(WindowEvent e){
		}
	}

	public static void main(String args[]){
		MiFrame mf=new MiFrame();
		mf.setVisible(true);
	}
}
