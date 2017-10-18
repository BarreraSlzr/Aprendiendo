import java.util.HashMap;
import java.util.Iterator;

class Key{
	private int key;
	private String name;
	
	public Key(int key){
		this.key=key;
	}
	
	public void setName(String n){
		name=n;
	}
	
	public String getName(){
		return name;
	}
	
	public int getKey(){
		return key;
	}
	
	public boolean equals(Object o){
		if (o instanceof Key){
			return ((Key)o).key==key;
		}
		return false;
	}
	
	public int hashCode(){
		return key;
	}
}

public class ReplacingHashMapValue {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		HashMap<Key,Integer> table=new HashMap<Key,Integer>();
		Key one=new Key(1);
		Key one2=new Key(1);
		Key key;
		Iterator<Key> ite;
		one.setName("One");
		one2.setName("ONE");
		table.put(one, 9);
		System.out.println("Using key 'one'="+table.get(one));
		System.out.println("Using key 'one2'="+table.get(one2));
		ite=table.keySet().iterator();
		while(ite.hasNext()){
			System.out.println("key.toString()"+(key=ite.next()));
			System.out.println("Key="+key.getKey());
			System.out.println("other attribute is "+key.getName());
		}
		table.put(one2,12);//key is not replaced, only value is replaced
		System.out.println("Using key 'one'="+table.get(one));
		System.out.println("Using key 'one2'="+table.get(one2));
		ite=table.keySet().iterator();
		while(ite.hasNext()){
			System.out.println(ite.next().getName());
		}
		//didn´t print "ONE" but "One"
	}

}
