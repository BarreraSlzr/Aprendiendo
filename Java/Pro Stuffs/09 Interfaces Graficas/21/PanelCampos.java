import java.awt.Panel;
import java.awt.Label;
import java.awt.TextField;

public class PanelCampos extends Panel{
	public static final long serialVersionUID=1;
	private final int CAMPO_ALFA_CARACTERES_VISIBLES=10;
	private final int CAMPO_NUM_CARACTERES_VISIBLES=4;
	private TextField campoAlfa,campoNum;

	public PanelCampos(){
		campoAlfa=new TextField(CAMPO_ALFA_CARACTERES_VISIBLES);
		campoNum=new TextField(CAMPO_NUM_CARACTERES_VISIBLES);
		add(new Label("Alfanumerico:"));
		add(campoAlfa);
		add(new Label("Numerico:"));
		add(campoNum);
	}

	public String dameAlfa(){
		return campoAlfa.getText();
	}

	public String dameNum(){
		return campoNum.getText();
	}
}