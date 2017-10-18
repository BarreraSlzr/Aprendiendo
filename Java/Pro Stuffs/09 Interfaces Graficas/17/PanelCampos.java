import java.awt.Panel;
import java.awt.Label;
import java.awt.TextField;

public class PanelCampos extends Panel{
	public static final long serialVersionUID=1;
	private TextField campoAlfa,campoNum;

	public PanelCampos(){
		campoAlfa=new TextField(10);
		campoNum=new TextField(4);
		add(new Label("Alfanumerico:"));
		add(campoAlfa);
		add(new Label("Numerico:"));
		add(campoNum);
	}
}