
class Subrutinas{
	
	public static void selectivaIfAnidada(){
	    //Selectiva if anidada
	    float promedio;
	    System.out.print("Cual es tu promedio actual? ");
	    promedio=ScanF.leeFloat();
	    
	    if ((promedio>=60)&&(promedio<=100)){
	        if (promedio>=95){
	        	System.out.print("Excelente, si continuas asi te puedes titular por excelencia academica");
	        }
	        else if (promedio>=90){
	        	System.out.print("Muy bien, si continuas asi te puedes titular por promedio");
	        }
	        else if (promedio>=85){
	        	System.out.print("Bien, pero te conviene estar mas cerca del 90 por aquello de un semestre dificil");
	        }
	        else if (promedio>=80){
	        	System.out.print("Cuidado!, si bajas de 80 no podras aspirar a una maestria de excelencia ");
	        	System.out.print("nacional o extranjera");
	        }
	        else if (promedio>=60){
	        	System.out.print("Si no subes tu promedio arriba de 80, estaras condenado a ser un licenciado ");
	        	System.out.print("(si acaso) el resto de tu vida\n");
	        	System.out.print("Te conviene llevar el m�nimo de creditos para subir promedio");
	        }
	        else{
	        	System.out.println("ESTO NO DEBERIA SER EJECUTADO!!!!!!!!!");
	        }
	    }
	    else{
	    	System.out.print("Hay que contemplar todas las opciones, por eso este \"else\"\n");
	    	System.out.print("Nadie aqui presente ha de caer en este caso");
	    }
	    System.out.print("\nRecuerda que por promedio se eligen:\n");
	    System.out.print("Los mejores profesores, los mejores horarios, las mejores plazas de servicio social,");
	    System.out.print("los mejores posgrados, etc, etc.\n");
	    System.out.print("Si puedes titularte elaborando una tesis te sera mejor\n");
	}
	
	public static int divide(int dividendo,int divisor){
		int cociente;
		cociente=dividendo/divisor;
		return cociente;
	}
	
}

public class ProgramacionModular {
	
	public static int resta(int minuendo,int sustraendo){
		int resultado;
		resultado=minuendo-sustraendo;
		return resultado;
	}
	
	public static void main(String args[]){
		int resultado;
		Subrutinas.selectivaIfAnidada();
		resultado=Subrutinas.divide(299,3);
		System.out.println("cociente="+resultado);
		resultado=resta(10,2);
		System.out.println("resta="+resultado);
	}
}
