// Exercicio 10

#include <stdio.h>

void main()
{
    int n, q;
    printf(" Calculo dos quadrados de uma sequencia de numeros \n \nEntre com uma sequencia de numeros nao-nulos, seguida por 0: \n");
    do{
        scanf("%d",&n);
        q = n * n;
        if (n!=0){
            printf("O quadrado de %d e %d\n",n,q);
        }
    } while (n!=0);
    getch();
}
