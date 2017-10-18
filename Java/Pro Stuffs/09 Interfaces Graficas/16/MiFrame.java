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
	private PanelBotones panelBotones;
	protected PanelCampos panelCampos;//que pasa si comento esta?
	//protected final PanelCampos panelCampos;//que pasa si descomento?

	public MiFrame(){
		super("Interfaces Graficas");
		setLayout(new BorderLayout());
		informador=new TextArea();
		panelBotones=new PanelBotones();
		panelCampos=new PanelCampos();//que pasa si comento esta?
		informador.setEditable(false);
		add("North",panelCampos);//y esta tambien?
		add("Center",informador);
		add("South",panelBotones);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		addWindowListener(this);
	}

	public void imprime(String s){
		//panelCampos=new PanelCampos();//que pasa si descomento esta?
		informador.append(s);
	}

	public void imprimeln(String s){
		informador.append(s+"\n");
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
		mf.imprime("Hola ");
		mf.imprimeln("Mundo de Objetos");
		mf.imprimeln("Solo para:");
		mf.imprimeln("Ingenieria en Computacion e Ingenieria Informatica");
		mf.imprimeln("Universidad de Guadalajara");
	}
}
