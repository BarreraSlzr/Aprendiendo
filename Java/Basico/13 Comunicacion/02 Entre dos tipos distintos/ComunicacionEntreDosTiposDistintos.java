public class ComunicacionEntreDosTiposDistintos {

	public static void main(String args[]){
		Mujer ella=new Mujer();
		Hombre alberto=new Hombre();
		System.out.println("El es "+alberto.dameNombre());
		System.out.println("Ella es "+ella.dameNombre());
		ella.fijaMarido(alberto);
		alberto.fijaEsposa(ella);
		ella.conocePlatillo("Pizza", 50);
		ella.conocePlatillo("Papas al Horno", 20);
		alberto.incrementaDineroDisponible(123);
		alberto.quererComer();
		alberto.quererComer();
		alberto.quererComer();
		alberto.quererComer();
	}
}

class Mujer{
	private String nombre;
	private Hombre marido;
	private String listadoPlatillosConocidos;
	
	public Mujer(){
		nombre="Ella";
		marido=null;
		listadoPlatillosConocidos="";
	}
	
	public void fijaNombre(String n){
		nombre=n;
	}
	
	public void fijaMarido(Hombre h){
		marido=h;
	}

	public String dameNombre(){
		return nombre;
	}

	public Hombre dameMarido(){
		return marido;
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
					dineroObtenido=marido.dameDineroParaComida(dineroSolicitado);
				}
				//else en una iteración anterior su marido le entregó todo lo que le quedaba
				if (dineroObtenido>=dineroSolicitado){
					escogerOtroPlatillo=false;
					comidaElegida=comidaPosible;
					if (dineroObtenido>dineroSolicitado){
						marido.incrementaDineroDisponible(dineroObtenido-dineroSolicitado);
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
					marido.incrementaDineroDisponible(dineroObtenido);
				}
			}
		}while(escogerOtroPlatillo);
		System.out.println(dameNombre()+" preparo "+comidaElegida);
		return comidaElegida;
	}
}

class Hombre{
	private String nombre;
	private Mujer esposa;
	private float dineroDisponible;
	
	public Hombre(){
		nombre="Luis Alberto";
		esposa=null;
		dineroDisponible=0;
	}
	
	public void fijaNombre(String n){
		nombre=n;
	}
	
	public void fijaEsposa(Mujer m){
		esposa=m;
	}
	
	public String dameNombre(){
		return nombre;
	}
	
	public Mujer dameEsposa(){
		return esposa;
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
		comida=esposa.dameComida();
		if (comida!=null){
			System.out.println(dameNombre()+" comio "+comida);
		}
		else{
			System.out.println(dameNombre()+" debe trabajar mas para comer =)");
		}
	}
}
