package hilosEventos;

import hilosEventos.PanelClienteServidor;
import hilosEventos.PanelIPID;

import java.awt.Frame;
import java.awt.BorderLayout;
import java.awt.TextArea;
import java.awt.event.WindowListener;
import java.awt.event.WindowEvent;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class FrameClienteServidor extends Frame implements WindowListener{
	public static final long serialVersionUID=1;
	private TextArea informador;
	private PanelClienteServidor panelBotones;
	protected PanelIPID destinatario;
	public static final int TIEMPO_ESPERA=1000;
	public static final int VECES_SALUDO=1000;

	public FrameClienteServidor(){
		super("Modelo Cliente/Servidor");
		setLayout(new BorderLayout());
		informador=new TextArea();
		panelBotones=new PanelClienteServidor();
		destinatario=new PanelIPID();
		informador.setEditable(false);
		add("North",destinatario);
		add("Center",informador);
		add("South",panelBotones);
		ManejadorBotones mb=new ManejadorBotones();
		panelBotones.agregarActionListener(mb);
		setSize(440,300);
		addWindowListener(this);
	}

	public void imprime(String s){
		informador.append(s);
	}

	public void imprimeln(String s){
		informador.append(s+"\n");
	}

	public String dameIP(){
		return destinatario.dameIP();
	}

	public int dameID(){
		int i=0;
		try{
			i=Integer.parseInt(destinatario.dameID());
		}catch(NumberFormatException e){
			imprimeln(e.getMessage());
			System.out.println(e.getMessage());
		}
		return i;
	}
	
	class Hilo extends Thread{
		private String comando;
		
		public Hilo(String comando){
			this.comando=comando;
		}
		
		public void run(){
			for(int i=0;i<10;i++){
				imprimeln("evento "+i+" "+comando);
				try{
					Thread.sleep(TIEMPO_ESPERA);
				}catch(InterruptedException ex){
					System.out.println("InterruptedException");
				}
			}
		}
	}

	class ManejadorBotones implements ActionListener{

		public void actionPerformed(ActionEvent e){
			String com=e.getActionCommand();
			System.out.println(com);
			(new Hilo(com)).start();
		}
	}

	public void windowClosing(WindowEvent e){
		System.out.println("Maquina: --"+dameIP()+"--");
		System.out.println("Proceso: --"+dameID()+"--");
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
		FrameClienteServidor mnf=new FrameClienteServidor();
		mnf.setVisible(true);
		mnf.imprime("Hola ");
		mnf.imprimeln("Mundo de PPI");
		mnf.imprimeln("Ingeniería en Computacion e Ingenieria Informatica");
		mnf.imprimeln("Universidad de Guadalajara");
		for(int i=0;i<VECES_SALUDO;i++){
			mnf.imprimeln("Que onda =) "+i);
			try{
				Thread.sleep(TIEMPO_ESPERA);
			}catch(InterruptedException e){
				System.out.println("InterruptedException");
			}
		}
	}
}
