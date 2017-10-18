import java.awt.Frame;
import java.awt.event.WindowListener;
import java.awt.event.WindowEvent;
import java.awt.BorderLayout;
import java.awt.TextArea;

public class MiFrame extends Frame implements WindowListener{
	public static final long serialVersionUID=1;
	private final int PIXELES_ALTO=300;
	private final int PIXELES_ANCHO=440;
	private TextArea informador;

	public MiFrame(){
		super("Interfaces Graficas");
		setLayout(new BorderLayout());//innecesario pues Frame tiene a BorderLayout por defecto
		informador=new TextArea();
		add("Center",informador);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		addWindowListener(this);
	}

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

	public static void main(String args[]){
		MiFrame mf=new MiFrame();
		mf.setVisible(true);
	}
}
