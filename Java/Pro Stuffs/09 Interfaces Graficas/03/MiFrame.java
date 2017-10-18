import java.awt.Frame;

public class MiFrame extends Frame{
	public static final long serialVersionUID=1;

	public MiFrame(){
		super();
		setSize(440,300);
	}

	public static void main(String args[]){
		MiFrame mf=new MiFrame();
		mf.setVisible(true);
	}
}
