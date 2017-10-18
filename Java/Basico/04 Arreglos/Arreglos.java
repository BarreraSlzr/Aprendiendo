public class Arreglos{
  public static void main(String args[]){
      int i,j;
      
      String curso="EDA1";
      System.out.println(curso);
      
      System.out.println("Uso de arreglos");
      int[] numeros=new int[4];
      for(i=0;i<numeros.length;i++){
          numeros[i]=i*10;
      }
      System.out.println("imprimiendo arreglo de int...");
      for(i=0;i<numeros.length;i++){
          System.out.println(numeros[i]);
      }
      
      char[] cars=new char[4];
      for(i=0;i<cars.length;i++){
          cars[i]=(char)(65+i);
      }
      System.out.println("imprimiendo arreglo de chars...");
      for(i=0;i<cars.length;i++){
          System.out.println(cars[i]);
      }
      
      byte[] arreglo1;
      arreglo1=new byte[4];
      for(i=0;i<arreglo1.length;i++){
          arreglo1[i]=(byte)(65+i);
      }
      System.out.println("imprimiendo arreglo de bytes #1...");
      for(i=0;i<arreglo1.length;i++){
          System.out.println(arreglo1[i]);
      }
      
      byte[] arreglo2={65,66,67,68};
      System.out.println("imprimiendo arreglo de bytes #2...");
      for(i=0;i<arreglo2.length;i++){
          System.out.println(arreglo2[i]);
      }
      
      System.out.println("Conversion de una cadena a ASCII...");
      byte[] cursoBytes;
      cursoBytes=curso.getBytes();
      System.out.println("imprimiendo valores ASCII...");
      for(i=0;i<cursoBytes.length;i++){
          System.out.println(cursoBytes[i]);
      }
      System.out.println("imprimiendo caracteres...");
      for(i=0;i<cursoBytes.length;i++){
          System.out.println((char)cursoBytes[i]);
      }
      System.out.println("o bien...");
      for(i=0;i<cursoBytes.length;i++){
          System.out.print((char)cursoBytes[i]);
      }
      
      System.out.println("\nCopiando arreglos e invirtiendo...");
      byte[] destino=new byte[cursoBytes.length];
      j=destino.length;
      for(i=0;i<cursoBytes.length;i++){
          j--;
          destino[j]=cursoBytes[i];
      }
      for(;j<destino.length;j++){
          System.out.print((char)destino[j]);
      }
      
      System.out.println("\nArreglo de Objetos:");
      String cadenas[]=new String[6];
      cadenas[0]="Curso";
      cadenas[1]="de";
      cadenas[2]="Estructuras";
      cadenas[3]="de";
      cadenas[4]="Datos";
      cadenas[5]="I";
      for(i=0;i<cadenas.length;i++){
    	  System.out.println(cadenas[i]);
      }
      for(i=0;i<cadenas.length;i++){
    	  System.out.print(cadenas[i]);
    	  System.out.print(" ");
      }
      
      System.out.println("\nArgumentos leidos de consola:");
      if (args.length>0){
          for(i=0;i<args.length;i++){
              System.out.println(args[i]);
          }
      }
      else{
    	  System.out.println("no me diste argumentos");
      }
  }
}
