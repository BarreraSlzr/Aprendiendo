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
	private int contador=0;
	private MiSegundoFrame ventanas[];
	protected PanelCampos panelCampos;

	public MiFrame(){
		super("Interfaces Graficas");
		setLayout(new BorderLayout());
		informador=new PanelInformador();
		panelBotones=new PanelBotones();
		panelCampos=new PanelCampos();
		add("North",panelCampos);
		add("Center",informador);
		add("South",panelBotones);
		setSize(PIXELES_ANCHO,PIXELES_ALTO);
		addWindowListener(this);
		panelBotones.agregarActionListener(construirPanelSur());
	}

	private ActionListener construirPanelSur(){
		ManejadorBotones mb=new ManejadorBotones();
		ventanas=new MiSegundoFrame[CANTIDAD_VENTANAS_INICIALES];
		return mb;
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

	protected void registrarVentana(MiSegundoFrame sf){
		MiSegundoFrame temp[];
		boolean encontro=false;
		int i;
		for(i=0;i<ventanas.length;i++){
			if (ventanas[i]==null){
				ventanas[i]=sf;
				encontro=true;
				imprimeln("Ventana "+ventanas[i].dameIdentificador()+" iniciada.");
				break;
			}
		}
		if (!encontro){
			temp=new MiSegundoFrame[ventanas.length+1];
			for(i=0;i<ventanas.length;i++){
				temp[i]=ventanas[i];
			}
			temp[i]=sf;
			ventanas=temp;
		}
	}

	class ManejadorBotones implements ActionListener{

		public void actionPerformed(ActionEvent e){
			String com=e.getActionCommand();
			imprimeln(com);
			contador++;
			if (com.equals(ETIQUETA_BOTON_OPCIONES)){
				imprimeln("Iniciando ventana "+ETIQUETA_BOTON_OPCIONES);
				registrarVentana(new FrameOpciones(MiFrame.this,contador));
			}
			else if (com.equals(ETIQUETA_BOTON_SELECTOR)){
				imprimeln("Iniciando ventana "+ETIQUETA_BOTON_SELECTOR);
				registrarVentana(new FrameSeleccion(MiFrame.this,contador));
			}
		}
	}

	private void desregistrarVentana(int i){
		imprimeln("Cerrando ventana "+ventanas[i].dameIdentificador());
		Pausador.pausa(PAUSA_CERRAR_VENTANA_MILISEGUNDOS);
		ventanas[i].setVisible(false);
		ventanas[i]=null;
	}

	public void cerrarFrameSecundario(MiSegundoFrame sf){
		for(int i=0,j=ventanas.length;i<j;i++){
			if (ventanas[i]!=null && ventanas[i].equals(sf)){
				desregistrarVentana(i);
				break;
			}
		}
	}

	public void windowClosing(WindowEvent e){
		System.out.println("Campo alfanumérico: --"+dameAlfa()+"--");
		System.out.println("Campo numérico: --"+dameNum()+"--");
		imprimeln("Terminando ventana principal...");
		for(int i=0,j=ventanas.length;i<j;i++){
			if (ventanas[i]!=null){
				desregistrarVentana(i);
			}
		}
		Pausador.pausa(PAUSA_CERRAR_VENTANA_MILISEGUNDOS);
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
