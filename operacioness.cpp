#include <stdio.h>

int main()
{
    int n;
    do {
        printf("Ingrese un numero");
        scanf("%d",n);
    }while (n<1 || n>10 );
}
