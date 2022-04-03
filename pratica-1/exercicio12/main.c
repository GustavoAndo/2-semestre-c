// Exercicio 12

#include <stdio.h>

void main()
{
     int n, k, i;
     printf("Digite o valor de n: ");
     scanf("%d",&n);
     printf("Os %d primeiros impares sao:\n",n);
     i = 1;
     for(k=1;k<=n;k++){
        printf("%d\n",i);
        i = i + 2;
     }
     getch();
}
