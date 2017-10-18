
public class MetodoAbstracto {

	public static void main(String[] args) {
		//Vehiculo v=new Vehiculo();  //no compila
		Automovil mustang=new Automovil("Ford","Mustang","Chido",2,4,4,6);
		Avion f14=new Avion("USAF","F-14","Unico",1,1,2);
		System.out.println(mustang);
		System.out.println(f14);
	}
}

abstract class Vehiculo{
	private String marca;
	private String modelo;
	private String tipoMotor;
	private int numPuertas;
	private int numVentanas;
	
	public Vehiculo(String marcax,String modelox,String tipoMotorx,
			int numPuertasx,int numVentanasx){
		marca=marcax;
		modelo=modelox;
		tipoMotor=tipoMotorx;
		numPuertas=numPuertasx;
		numVentanas=numVentanasx;
	}
	
	public String toString(){  //sobreescritura de Object.toString()
		return marca+" "+modelo+" con motor "+tipoMotor+" con "+
			numPuertas+" puerta(s) y "+numVentanas+" ventana(s)";
	}
	
	public abstract double calcularEficienciaGasolina();
}

class Automovil extends Vehiculo{
	private int numLlantas;
	private int numVelocidades;
	
	public Automovil(String marcax,String modelox,String tipoMotorx,
			int numPuertasx,int numVentanasx,int numLlantasx,int numVelocidadesx){
		super(marcax,modelox,tipoMotorx,numPuertasx,numVentanasx);
		numLlantas=numLlantasx;
		numVelocidades=numVelocidadesx;
	}
	
	public String toString(){  //sobreescritura de Vehiculo.toString()
		return super.toString()+" y además "+numLlantas+" llantas y "+
			numVelocidades+" velocidades";
	}
	
	public double calcularEficienciaGasolina(){
		return 0;
	}
}

class Avion extends Vehiculo{
	private int tipoAlas;
	
	public Avion(String marcax,String modelox,String tipoMotorx,
			int numPuertasx,int numVentanasx,int tipoAlasx){
		super(marcax,modelox,tipoMotorx,numPuertasx,numVentanasx);
		tipoAlas=tipoAlasx;
	}
	
	public String toString(){  //sobreescritura de Vehiculo.toString()
		return super.toString()+" y además alas tipo "+tipoAlas;
	}

	public double calcularEficienciaGasolina(){
		return 0;
	}
}