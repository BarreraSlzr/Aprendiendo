#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Dame un numero entero: ");
    scanf("%d",&num);
    if (num>0){  //seleccion canonica
        printf("\nEl numero %d es mayor que cero",num);
    }
    else{
        /*if anidado inapropiado comparese con
            02 Selectiva Doble if-else canonica
            "evitar anidar un if en el else de otro if"
            si esto es todo lo que hay en el else de ese otro if
            */
        if (num==0){
            printf("\nEl numero %d es cero",num);
        }
        else{
            printf("\nEl numero %d es negativo",num);
        }
    }
    printf("\nbye bye\n");
    return 0;
}
