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
	protected PanelCampos panelCampos;

	public MiFrame(){
		super("Interfaces Gráficas");
		setLayout(new BorderLayout());
		informador=new TextArea();
		panelBotones=new PanelBotones();
		panelCampos=new PanelCampos();
		informador.setEditable(false);
		add("North",panelCampos);
		add("Center",informador);
		add("South",panelBotones);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		addWindowListener(this);
	}

	public void imprime(String s){
		informador.append(s);
	}

	public void imprimeln(String s){
		informador.append(s+"\n");
	}

	public String dameAlfa(){
		return panelCampos.dameAlfa();
	}

	public void windowClosing(WindowEvent e){
		System.out.println("Campo alfanumerico: --"+dameAlfa()+"--");
		System.exit(0);
	}

	public void windowActivated(WindowEvent e){
		System.out.println("Window activated: --"+dameAlfa()+"--");
	}
	public void windowClosed(WindowEvent e){
		System.out.println("Window closed:");/*hay que descomentar la ultima
		linea del main para provocar este metodo*/
	}
	public void windowDeactivated(WindowEvent e){
		System.out.println("Window deactivated: --"+dameAlfa()+"--");
	}
	public void windowDeiconified(WindowEvent e){
		System.out.println("Window deiconified: --"+dameAlfa()+"--");
	}
	public void windowIconified(WindowEvent e){
		System.out.println("Window iconified: --"+dameAlfa()+"--");
	}
	public void windowOpened(WindowEvent e){
		System.out.println("Window opened: --"+dameAlfa()+"--");
	}

	public static void main(String args[]){
		MiFrame mf=new MiFrame();
		mf.setVisible(true);
		mf.imprime("Hola ");
		mf.imprimeln("Mundo de Objetos");
		mf.imprimeln("Solo para:");
		mf.imprimeln("Ingenieria en Computacion e Ingenieria Informatica");
		mf.imprimeln("Universidad de Guadalajara");
		//mf.dispose();
	}
}
