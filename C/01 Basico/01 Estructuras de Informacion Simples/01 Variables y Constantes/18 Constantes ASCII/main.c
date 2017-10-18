#include <stdio.h>
#include <stdlib.h>

#define ENIE 0xA4

int main()
{
    printf("la enie: %c\n",ENIE);
    printf("sue%co\n",ENIE);
    printf("sue\xA4o\n");
    return 0;
}
