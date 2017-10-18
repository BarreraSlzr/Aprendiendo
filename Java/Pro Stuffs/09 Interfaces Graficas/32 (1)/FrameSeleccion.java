import java.awt.Panel;
import java.awt.Button;
import java.awt.Label;
import java.awt.TextField;
import java.awt.Choice;

public class FrameSeleccion extends MiSegundoFrame implements Constantes{
	public static final long serialVersionUID=1;
	private final int CAMPO_DATOS_LARGO=10;
	private Choice selectorOperaciones;
	private TextField campoDatos;
	private Button botonRealizar;

	public FrameSeleccion(MiFrame creador,int id){
		super(creador,"Ventana con selector y campo de texto",id);
		add("South",construirPanelSolicitud());
		validate();
	}

	private Panel construirPanelSolicitud(){
		Panel p=new Panel();
		selectorOperaciones=new Choice();
		selectorOperaciones.add(AGREGAR);
		selectorOperaciones.add(ELIMINAR);
		selectorOperaciones.add(CONSULTAR);
		selectorOperaciones.add(MODIFICAR);
		campoDatos=new TextField(CAMPO_DATOS_LARGO);
		botonRealizar=new Button(ETIQUETA_BOTON_REALIZAR);
		p.add(new Label("Operacion:"));
		p.add(selectorOperaciones);
		p.add(new Label("Datos:"));
		p.add(campoDatos);
		p.add(botonRealizar);
		return p;
	}
}
