package hilosEventos;

import java.awt.Panel;
import java.awt.Label;
import java.awt.TextField;

public class PanelIPID extends Panel{
	public static final long serialVersionUID=1;
	private TextField campoIP,campoID;

	public PanelIPID(){
		campoIP=new TextField(10);
		campoID=new TextField(4);
		add(new Label("Maquina:"));
		add(campoIP);
		add(new Label("Proceso:"));
		add(campoID);
	}

	public String dameIP(){
		return campoIP.getText();
	}

	public String dameID(){
		return campoID.getText();
	}
}