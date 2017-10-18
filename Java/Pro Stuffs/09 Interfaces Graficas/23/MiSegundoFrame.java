import java.awt.Frame;
import java.awt.BorderLayout;
import java.awt.event.WindowListener;
import java.awt.event.WindowEvent;
import java.awt.TextArea;

public class MiSegundoFrame extends Frame implements WindowListener{
	public static final long serialVersionUID=1;
	private final int PIXELES_ALTO=280;
	private final int PIXELES_ANCHO=400;
	private TextArea informador;
	protected PanelIdentificacion identificador;

	public MiSegundoFrame(String nombre){
		super("Ventana "+nombre);
		informador=new TextArea();
		identificador=new PanelIdentificacion();
		informador.setEditable(false);
		setLayout(new BorderLayout());
		add("North",identificador);
		add("Center",informador);
		addWindowListener(this);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		setVisible(true);
	}

	public void imprime(String s){
		informador.append(s);
	}

	public void imprimeln(String s){
		informador.append(s+"\n");
	}

	public void windowClosing(WindowEvent e){
		setVisible(false);
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
