import java.util.HashMap;
import java.util.Iterator;

public class JavaHashMap {
	private static final char YES='Y';
	private static final char YES_MIN='y';
	
	public static boolean addMoreSnacks(){
		char response;
		System.out.println("Would you like to add more snacks? ");
		return ((response=ScanF.leeChar())==YES||response==YES_MIN);
	}
	
	public static void readSnackInfo(MutableString name,MutableFloat price,
			MutableInteger calories){
		System.out.println("Give me snack´s name: ");
		name.value=ScanF.leeString();
		System.out.println("Give me snack´s price: ");
		price.value=ScanF.leeFloat();
		System.out.println("Give me snack´s calories: ");
		calories.value=ScanF.leeInt();
	}
	
	public static void getASnack(SnackManager snackList){
		System.out.println("Which snack do you want?");
		System.out.println(snackList.getSnack(ScanF.leeString()));
	}
	
	public static void main(String[] args) {
		SnackManager snackList=new SnackManager();
		MutableString name=new MutableString();
		MutableFloat price=new MutableFloat();
		MutableInteger calories=new MutableInteger();
		do{
			readSnackInfo(name,price,calories);
			try{
				snackList.addSnack(name.value, price.value, calories.value);
				System.out.println("Snack "+name.value+" was added");
			}catch(SnackException e){
				System.out.println(e.getMessage());
				//System.err.println(e.getMessage());
			}
		}
		while(addMoreSnacks());
		System.out.println(snackList);
		getASnack(snackList);
		
	}

}

class MutableInteger{
	public int value;
	
	public MutableInteger(int value){
		this.value=value;
	}
	public MutableInteger(){
	}
}

class MutableString{
	public String value;
	
	public MutableString(String value){
		this.value=value;
	}
	
	public MutableString(){
		this("");
	}
}

class MutableFloat{
	public float value;
	
	public MutableFloat(float value){
		this.value=value;
	}
	public MutableFloat(){
	}
}

class SnackException extends Exception{
	public static final long serialVersionUID=1;
	public SnackException(String name){
		super(name);
	}
}

class Snack{
	public String name;
	public float price;
	public int calories;
	
	public Snack(String name,float price,int calories){
		this.name=name;
		this.price=price;
		this.calories=calories;
	}
	
	public String toString(){
		return name+"\t"+price+"\t"+calories+"\t"+hashCode();
	}
	
	public int hashCode(){
		return name.hashCode()^(int)price^calories;
	}
	
	public boolean equals(Object o){
		Snack s;
		if (o instanceof Snack){
			return name.equals((s=(Snack)o).name) && price==s.price && calories==s.calories;
			//return name.equals(((Snack)o).name);
		}
		return false;
	}
}

class SnackManager{
	private HashMap<String,Snack> table=new HashMap<String,Snack>();
	
	public void addSnack(String name,float price,int calories) throws SnackException{
		if (table.containsKey(name)){
			throw new SnackException("Snack \""+name+"\" is already into list");
		}
		else{
			table.put(name,new Snack(name,price,calories));
		}
	}
	
	public Snack getSnack(String name){
		return table.get(name);
	}
	
	public String toString(){
		StringBuilder sb=new StringBuilder();
		Iterator<String> ite=table.keySet().iterator();
		while(ite.hasNext()){
			sb.append(table.get(ite.next()));
			sb.append("\n");
		}
		return sb.toString();
	}
}