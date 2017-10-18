package hilosEventos;

import java.awt.Panel;
import java.awt.Button;
import java.awt.event.ActionListener;

public class PanelClienteServidor extends Panel{
	public static final long serialVersionUID=1;
	private Button botonCliente,botonServidor;

	public PanelClienteServidor(){
		botonCliente=new Button("Cliente");
		botonServidor=new Button("Servidor");
		add(botonCliente);
		add(botonServidor);
	}

	public Button dameBotonCliente(){
		return botonCliente;
	}

	public Button dameBotonServidor(){
		return botonServidor;
	}

	public void agregarActionListener(ActionListener al){
		botonCliente.addActionListener(al);
		botonServidor.addActionListener(al);
	}
}