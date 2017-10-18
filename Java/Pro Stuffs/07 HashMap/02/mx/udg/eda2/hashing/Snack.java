package mx.udg.eda2.hashing;

public class Snack{
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

