
public class Casting {

	public static void main(String[] args) {
		Empleado e1=new Empleado();      //bien
		Ingeniero ing=new Ingeniero();   //bien
		Empleado e2=new Ingeniero();     //bien
		e1.nombre="Luis";                // bien
		ing.especialidad="Software";     //bien
		e2.nombre="Luis Alberto";        //bien
		//e2.especialidad="Hardware";      //no compila ya que especialidad
		                                   // no es atributo de Empleado
		((Ingeniero)e2).especialidad="Software de Sistemas";    //esta si compila
		((Ingeniero)e1).especialidad="Sistemas Digitales";      /*tambien compila
				                        pero truena en tiempo de ejecución*/
		if (e2 instanceof Ingeniero){
			Ingeniero inge=(Ingeniero)e2;
			inge.especialidad="Sistemas Digitales";
			System.out.println("e2.especialidad="+inge.especialidad);
		}
		else{
			System.out.println("e2 no es un ingeniero");
		}
		if (e1 instanceof Ingeniero){
			((Ingeniero)e1).especialidad="Sistemas Digitales";
		}
		else{
			System.out.println("e1 no es un ingeniero");
		}
	}

}

class Empleado{
	String nombre;
}

class Ingeniero extends Empleado{
	String especialidad;
}