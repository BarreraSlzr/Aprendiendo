import java.awt.Frame;
import java.awt.BorderLayout;
import java.awt.event.WindowListener;
import java.awt.event.WindowEvent;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class MiFrame extends Frame implements WindowListener,Constantes{
	public static final long serialVersionUID=1;
	private final int PIXELES_ALTO=300;
	private final int PIXELES_ANCHO=440;
	private PanelInformador informador;
	private PanelBotones panelBotones;
	private int cuentaVentanas=0;
	protected PanelCampos panelCampos;

	public MiFrame(){
		super("Interfaces Gráficas");
		setLayout(new BorderLayout());
		informador=new PanelInformador();
		panelBotones=new PanelBotones();
		panelCampos=new PanelCampos();
		add("North",panelCampos);
		add("Center",informador);
		add("South",panelBotones);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		addWindowListener(this);
		ManejadorBotones mb=new ManejadorBotones();
		panelBotones.agregarActionListener(mb);
	}

	public void imprime(String s){
		informador.imprime(s);
	}

	public void imprimeln(String s){
		informador.imprimeln(s);
	}

	public String dameAlfa(){
		return panelCampos.dameAlfa();
	}

	public int dameNum(){
		int i=0;
		try{
			i=Integer.parseInt(panelCampos.dameNum());
		}catch(NumberFormatException e){
			imprimeln(e.getMessage());
			System.out.println(e.getMessage());
		}
		return i;
	}

	class ManejadorBotones implements ActionListener{

		public void actionPerformed(ActionEvent e){
			String com=e.getActionCommand();
			imprimeln(com);
			cuentaVentanas++;
			if (com.equals(ETIQUETA_BOTON_OPCIONES)){
				imprimeln("Iniciando ventana "+ETIQUETA_BOTON_OPCIONES);
				new MiSegundoFrame(com,cuentaVentanas);
			}
			else if (com.equals(ETIQUETA_BOTON_SELECTOR)){
				imprimeln("Iniciando ventana "+ETIQUETA_BOTON_SELECTOR);
				new MiSegundoFrame(com,cuentaVentanas);
			}
		}
	}

	public void windowClosing(WindowEvent e){
		System.out.println("Campo alfanumerico: --"+dameAlfa()+"--");
		System.out.println("Campo numerico: --"+dameNum()+"--");
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
