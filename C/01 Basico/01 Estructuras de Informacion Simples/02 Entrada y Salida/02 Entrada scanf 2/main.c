#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float flotante,resultado;
    char caracter;
    char cadena[100];
    printf("Dame un entero\n");
    scanf("%d",&entero);//que pasa si escaneas "1.5"?
    printf("Dame un flotante\n");
    scanf("%f",&flotante);
    printf("Dame un caracter\n");
    getchar();//que pasa si comentas esta?
    scanf("%c",&caracter);
    printf("Dame una palabra\n");
    scanf("%s",cadena);  //que pasa si escaneas "hola mundo"?
    //Luego comentas la anterior y descomentas las que siguen?
    //getchar();//descomentar junto con gets()
    //gets(cadena);
    resultado=entero+flotante;
    printf("La suma de %d+%f es: %f\n",entero,flotante,resultado);
    printf("El caracter leido fue: %c\n",caracter);
    printf("La cadena leida fue: %s\n",cadena);
    return 0;
}
