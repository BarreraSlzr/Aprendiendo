#include <stdio.h>
#include <stdlib.h>

int main()
{
    float promedio=0;
    printf("Cual es tu promedio actual? ");
    scanf("%f",&promedio);
    if ((promedio>=60)&&(promedio<=100)){
        if (promedio>=95){
            printf("Excelente, si continuas asi te puedes titular por excelencia academica");
        }
        else if (promedio>=90){
            printf("Muy bien, si continuas asi te puedes titular por promedio");
        }
        else if (promedio>=85){
            printf("Bien, pero te conviene estar mas cerca del 90 por aquello de un semestre dificil");
        }
        else if (promedio>=80){
            printf("Cuidado!, si bajas de 80 no podras aspirar a una maestria de excelencia ");
            printf("nacional o extranjera");
        }
        else if (promedio>=60){
            printf("Si no subes tu promedio arriba de 80, estaras condenado a ser un licenciado ");
            printf("(si acaso) el resto de tu vida\n");
            printf("Te conviene llevar el mínimo de creditos para subir promedio");
        }
        else{
            printf("NO DEBERIA DE OCURRIR ESTO");
        }
    }
    else{
        printf("Hay que contemplar todas las opciones, por eso este \"else\"\n");
        printf("Nadie aqui presente ha de caer en este caso");
    }
    printf("\n\nRecuerda que por promedio se eligen:\n");
    printf("Los mejores profesores, los mejores horarios, las mejores plazas de servicio social,");
    printf("los mejores posgrados, etc, etc.\n");
    printf("Si puedes titularte elaborando una tesis te sera mejor\n");
    return 0;
}
