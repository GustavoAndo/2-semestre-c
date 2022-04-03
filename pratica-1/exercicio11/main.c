// Exercicio 11

#include <stdio.h>

void main()
{
    int n, k, s;
    printf(" Calculo da soma dos n primeiros numeros naturais\nDigite o valor de n: ");
    scanf("%d",&n);
    s = 0;
    for(k=1;k<=n;k++){
        s = s + k;
    }
    printf("A soma dos %d primeiros numeros naturais e %d\n",n,s);
    getch();
}
