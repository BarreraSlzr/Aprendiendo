import java.awt.Panel;
import java.awt.GridLayout;
import java.awt.Button;

public class FrameOpciones extends MiSegundoFrame{
	public static final long serialVersionUID=1;

	public FrameOpciones(MiFrame creador,int id){
		super(creador,"Ventana con varios botones",id);
		add("South",construirPanelSolicitud());
		validate();
	}

	private Panel construirPanelSolicitud(){
		Panel p=new Panel();
		p.setLayout(new GridLayout(2,3));
		p.add(new Button("Boton 1"));
		p.add(new Button("Boton 2"));
		p.add(new Button("Boton 3"));
		p.add(new Button("Boton 4"));
		p.add(new Button("Boton 5"));
		p.add(new Button("Boton 6"));
		return p;
	}
}
