import java.awt.Panel;
import java.awt.Button;

public class PanelBotones extends Panel{
	public static final long serialVersionUID=1;
	private Button botonOpciones,botonSeleccion;

	public PanelBotones(){
		botonOpciones=new Button("Opciones");
		botonSeleccion=new Button("Seleccion");
		add(botonOpciones);
		add(botonSeleccion);
	}

	public Button dameBotonOpciones(){
		return botonOpciones;
	}

	public Button dameBotonSeleccion(){
		return botonSeleccion;
	}
}