import java.awt.Panel;
import java.awt.Label;
import java.awt.TextField;

public class PanelIdentificacion extends Panel {
	public static final long serialVersionUID=1;
	private final int CAMPO_ID_LARGO=4;
	private TextField campoID;

	public PanelIdentificacion(){
		campoID=new TextField(CAMPO_ID_LARGO);
		campoID.setEditable(false);
		add(new Label("Identificacion:"));
		add(campoID);
	}
}
