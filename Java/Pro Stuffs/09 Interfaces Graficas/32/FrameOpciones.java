import java.awt.Panel;
import java.awt.GridLayout;
import java.awt.Button;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class FrameOpciones extends MiSegundoFrame{
	public static final long serialVersionUID=1;

	public FrameOpciones(MiFrame creador,int id){
		super(creador,"Ventana con varios botones",id);
		add("South",construirPanelSolicitud());
		validate();
	}

	private void agregaBoton(Panel p,String nombre,ActionListener manejador){
		Button b;
		b=new Button(nombre);
		b.addActionListener(manejador);
		p.add(b);
	}

	private Panel construirPanelSolicitud(){
		Panel p=new Panel();
		ManejadorBotones mb=new ManejadorBotones();
		p.setLayout(new GridLayout(2,3));
		agregaBoton(p,"Boton 1",mb);
		agregaBoton(p,"Boton 2",mb);
		agregaBoton(p,"Boton 3",mb);
		agregaBoton(p,"Boton 4",mb);
		agregaBoton(p,"Boton 5",mb);
		agregaBoton(p,"Boton 6",mb);
		return p;
	}

	class ManejadorBotones implements ActionListener{
		public void actionPerformed(ActionEvent e) {
			String com=e.getActionCommand();
			imprimeln("presionado el "+com);
		}
	}
}
