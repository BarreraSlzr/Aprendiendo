public class Casting{
  public static void main(String args[]){
      System.out.println("Casting");
      short entero2=127;
      byte entero1;
      //entero1=entero2;  //no compila por p�rdida de precisi�n
      entero1=(byte)entero2;  //as� s� compila
      System.out.println("bien el uso de casting...");
      System.out.println("entero2="+entero2);
      System.out.println("entero1="+entero1);
      
      entero2=128;
      entero1=(byte)entero2;
      System.out.println("cuidado con el uso de casting...");
      System.out.println("entero2="+entero2);
      System.out.println("entero1="+entero1);
      
      entero1=120;
      entero2=entero1;
      System.out.println("la promoci�n es autom�tica...");
      System.out.println("entero2="+entero2);
      System.out.println("entero1="+entero1);

      char caracterA='A';
      byte asciiA=(byte)caracterA;
      System.out.println("otra utilidad del casting...");
      System.out.println("caracterA="+caracterA);
      System.out.println("asciiA="+asciiA);
  }
}
