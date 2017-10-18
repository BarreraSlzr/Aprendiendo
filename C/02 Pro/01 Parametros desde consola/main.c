#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    printf("cantidad de elementos %d\n",argc);
    printf("%s\n",argv[0]);
    if (argc>1){
        for(i=1;i<argc;i++){
            printf("%s\n",argv[i]);
        }
    }
    return 0;
}
