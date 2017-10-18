import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;


public class ByteArraySerializer {
	
	public static byte[] serialize(Object o){
		ByteArrayOutputStream output=new ByteArrayOutputStream();
	    try{
	        ObjectOutputStream oos = new ObjectOutputStream(output);
	        oos.writeObject(o);
	        oos.close();
	    }catch(IOException e){
	        e.printStackTrace();
	    }
	    return output.toByteArray();
	}
	
	public static Object deserialize(byte[] bytes){
		ByteArrayInputStream input=new ByteArrayInputStream(bytes);
		Object o=null;
	    try{
	        ObjectInputStream ois = new ObjectInputStream(input);
	        o=ois.readObject();
	        ois.close();
	    }catch(IOException e){
	        e.printStackTrace();
	    }catch(ClassNotFoundException e){
	        e.printStackTrace();
	    }
	    return o;
	}
}
