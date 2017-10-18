public class ComunicacionEntreDosTiposDistintos {

	public static void main(String args[]){
		Hombre alberto=new Hombre();
		Mujer ella=new Mujer();
		System.out.println("El es "+ella.dameNombre());
		System.out.println("Ella es "+alberto.dameNombre());
		alberto.fijaMarida(ella);
		ella.fijaEsposo(alberto);
		alberto.conocePlatillo("Pizza", 50);
		alberto.conocePlatillo("Papas al Horno", 20);
		ella.incrementaDineroDisponible(123);
		ella.quererComer();
		ella.quererComer();
		ella.quererComer();
		ella.quererComer();
	}
}

class Hombre{
	private String nombre;
	private Mujer marida;
	private String listadoPlatillosConocidos;
	
	public Hombre(){
		nombre="Alberto";
		marida=null;
		listadoPlatillosConocidos="";
	}
	
	public void fijaNombre(String n){
		nombre=n;
	}
	
	public void fijaMarida(Mujer h){
		marida=h;
	}

	public String dameNombre(){
		return nombre;
	}

	public Mujer dameMarido(){
		return marida;
	}
	
	public void conocePlatillo(String nombrePlatillo,float costoPreparacion){
		listadoPlatillosConocidos+=nombrePlatillo+";"+costoPreparacion+";";
		System.out.println(dameNombre()+" ahora sabe preparar "+nombrePlatillo+
			" y eso cuesta $"+costoPreparacion);
		System.out.println("listadoPlatillosConocidos="+listadoPlatillosConocidos);
	}

	public String dameComida(){
		String platillosElegibles,comidaPosible,comidaElegida;
		float dineroSolicitado,dineroObtenido;
		boolean escogerOtroPlatillo;
		int pos;
		platillosElegibles=listadoPlatillosConocidos;
		dineroObtenido=-1;
		do{
			pos=platillosElegibles.indexOf(";");
			if (pos>0){
				comidaPosible=platillosElegibles.substring(0,pos);
				System.out.println(dameNombre()+" posiblemente prepare "+comidaPosible);
				platillosElegibles=platillosElegibles.substring(pos+1);
				pos=platillosElegibles.indexOf(";");
				dineroSolicitado=Float.parseFloat(platillosElegibles.substring(0,pos));
				if (dineroObtenido==-1){
					dineroObtenido=marida.dameDineroParaComida(dineroSolicitado);
				}
				//else en una iteración anterior su marido le entregó todo lo que le quedaba
				if (dineroObtenido>=dineroSolicitado){
					escogerOtroPlatillo=false;
					comidaElegida=comidaPosible;
					if (dineroObtenido>dineroSolicitado){
						marida.incrementaDineroDisponible(dineroObtenido-dineroSolicitado);
					}
					//else no le devuelve dinero
				}
				else{
					platillosElegibles=platillosElegibles.substring(pos+1);
					escogerOtroPlatillo=true;
					comidaElegida=null;
				}
			}
			else{
				System.out.println(dameNombre()+" no conoce ningun platillo o se le acabaron las opciones");
				escogerOtroPlatillo=false;
				comidaElegida=null;
				if (dineroObtenido>0){
					marida.incrementaDineroDisponible(dineroObtenido);
				}
			}
		}while(escogerOtroPlatillo);
		System.out.println(dameNombre()+" preparo "+comidaElegida);
		return comidaElegida;
	}
}

class Mujer{
	private String nombre;
	private Hombre esposo;
	private float dineroDisponible;
	
	public Mujer(){
		nombre="Ella";
		esposo=null;
		dineroDisponible=0;
	}
	
	public void fijaNombre(String n){
		nombre=n;
	}
	
	public void fijaEsposo(Hombre m){
		esposo=m;
	}
	
	public String dameNombre(){
		return nombre;
	}
	
	public Hombre dameEsposa(){
		return esposo;
	}
	
	public void incrementaDineroDisponible(float dinero){
		System.out.println(dameNombre()+" incrementa su dinero disponible en $"+dinero);
		dineroDisponible+=dinero;
	}
	
	public float dameDineroParaComida(float montoRequerido){
		float dinero;
		System.out.println(dameNombre()+" cuenta con $"+dineroDisponible);
		if (dineroDisponible>=montoRequerido){
			dinero=montoRequerido;
		}
		else{
			dinero=dineroDisponible;
		}
		dineroDisponible-=dinero;
		System.out.println(dameNombre()+" otorga $"+dinero+" y le quedan $"+dineroDisponible);
		return dinero;
	}
	
	public void quererComer(){
		String comida;
		System.out.println(dameNombre()+" quiere comer");
		comida=esposo.dameComida();
		if (comida!=null){
			System.out.println(dameNombre()+" comio "+comida);
		}
		else{
			System.out.println(dameNombre()+" debe trabajar mas para comer =)");
		}
	}
}
