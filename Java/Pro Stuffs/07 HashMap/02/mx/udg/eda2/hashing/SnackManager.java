package mx.udg.eda2.hashing;

import java.util.HashMap;
import java.util.Iterator;

public class SnackManager{
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