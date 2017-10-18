import java.util.ArrayList;
import java.io.*;

public class Persistencia{
	public static void main(String args[]){
		try{
			FileOutputStream fos = new FileOutputStream("t.dat");
			ObjectOutputStream oos = new ObjectOutputStream(fos);
			ArrayList<Integer> list=new ArrayList<Integer>();
			list.add(new Integer(67));
			oos.writeInt(65);
			oos.writeObject("Today");
			oos.writeObject(list);
			oos.close();
		}catch(FileNotFoundException e){
			e.printStackTrace(System.err);
		}catch(IOException e){
			e.printStackTrace(System.err);
		}
	}
}
