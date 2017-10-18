import java.awt.Panel;
import java.awt.Button;

public class PanelBotones extends Panel{
	public static final long serialVersionUID=1;
	private Button boton1,boton2;

	public PanelBotones(){
		boton1=new Button("Boton 1");
		boton2=new Button("Boton 2");
		add(boton1);
		add(boton2);
	}
}