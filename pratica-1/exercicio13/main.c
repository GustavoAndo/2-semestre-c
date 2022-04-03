// Exercicio 13

#include <stdio.h>
void main()
{
    int n1, n2, p, k;
    printf(" Calculo de potencias\n\nDigite um numero inteiro: ");
    scanf("%d",&n1);
    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d",&n2);
    p = 1;
    for(k=1;k<=n2;k++){
        p = p * n1;
    }
    printf("\nO valor de %d elevado a %d eh igual a %d\n",n1,n2,p);
    getch();
}
