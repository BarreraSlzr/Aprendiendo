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

	private Panel construirPanelSolicitud(){
		Panel p=new Panel();
		Button b1,b2,b3,b4,b5,b6;
		ManejadorBotones mb=new ManejadorBotones();
		p.setLayout(new GridLayout(2,3));
		b1=new Button("Boton 1");
		b2=new Button("Boton 2");
		b3=new Button("Boton 3");
		b4=new Button("Boton 4");
		b5=new Button("Boton 5");
		b6=new Button("Boton 6");
		b1.addActionListener(mb);
		b2.addActionListener(mb);
		b3.addActionListener(mb);
		b4.addActionListener(mb);
		b5.addActionListener(mb);
		b6.addActionListener(mb);
		p.add(b1);
		p.add(b2);
		p.add(b3);
		p.add(b4);
		p.add(b5);
		p.add(b6);
		return p;
	}

	class ManejadorBotones implements ActionListener{
		public void actionPerformed(ActionEvent e) {
			String com=e.getActionCommand();
			imprimeln("presionado el "+com);
		}
	}
}
