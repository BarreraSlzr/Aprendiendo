import java.awt.Panel;
import java.awt.Button;
import java.awt.event.ActionListener;

public class PanelBotones extends Panel implements Constantes{
	public static final long serialVersionUID=1;
	private Button botonOpciones,botonSeleccion;

	public PanelBotones(){
		botonOpciones=new Button(ETIQUETA_BOTON_OPCIONES);
		botonSeleccion=new Button(ETIQUETA_BOTON_SELECTOR);
		add(botonOpciones);
		add(botonSeleccion);
	}

	public Button dameBotonOpciones(){
		return botonOpciones;
	}

	public Button dameBotonSeleccion(){
		return botonSeleccion;
	}

	public void agregarActionListener(ActionListener al){
		botonOpciones.addActionListener(al);
		botonSeleccion.addActionListener(al);
	}
}