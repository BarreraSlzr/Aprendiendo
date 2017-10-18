import java.awt.Frame;
import java.awt.BorderLayout;
import java.awt.event.WindowListener;
import java.awt.event.WindowEvent;

public class MiSegundoFrame extends Frame implements WindowListener{
	public static final long serialVersionUID=1;
	private final int PIXELES_ALTO=280;
	private final int PIXELES_ANCHO=400;
	private MiFrame creador;
	private PanelInformador informador;
	protected PanelIdentificacion identificador;

	public MiSegundoFrame(MiFrame creador,String nombre,int id){
		super(nombre);
		this.creador=creador;
		informador=new PanelInformador();
		identificador=new PanelIdentificacion();
		identificador.fijarID(id);
		setLayout(new BorderLayout());
		add("North",identificador);
		add("Center",informador);
		addWindowListener(this);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		setVisible(true);
	}

	public void imprime(String s){
		informador.imprime(s);
	}

	public void imprimeln(String s){
		informador.imprimeln(s);
	}

	public final String dameIdentificador(){
		return identificador.dameID();
	}

	public void windowClosing(WindowEvent e){
		creador.cerrarFrameSecundario(this);
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
