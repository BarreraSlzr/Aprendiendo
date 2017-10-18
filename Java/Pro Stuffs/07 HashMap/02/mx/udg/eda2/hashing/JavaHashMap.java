package mx.udg.eda2.hashing;

import mx.udg.eda.util.ScanF;
import mx.udg.eda2.util.MutableFloat;
import mx.udg.eda2.util.MutableInteger;
import mx.udg.eda2.util.MutableString;

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

