import java.util.ArrayList;
import java.io.*;

public class Carga{
	
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		try{
			FileInputStream fis = new FileInputStream("t.dat");
			ObjectInputStream ois = new ObjectInputStream(fis);
			ArrayList<Integer> list;
			int a=ois.readInt();
			String s=(String)ois.readObject();
			list=(ArrayList<Integer>)ois.readObject();
			ois.close();
			System.out.println(a);
			System.out.println(s);
			System.out.println("size="+list.size());
			Integer i=list.get(0);
			System.out.println("elemento="+i);
		}catch(FileNotFoundException e){
			e.printStackTrace(System.err);
		}catch(IOException e){
			e.printStackTrace(System.err);
		}catch(ClassNotFoundException e){
			e.printStackTrace();
		}
	}
}
