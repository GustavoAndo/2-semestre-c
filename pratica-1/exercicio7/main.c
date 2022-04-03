// Exercicio 7

#include <stdio.h>

void main(){
     int n, f, k;
     printf("Escreva um numero: ");
     scanf("%d",&n);
     f = 1;
     k = 1;
     while (k<=n){
         f = f * k;
         k = k + 1;
     }
     printf("O fatorial do numero %d e %d \n",n,f);
     getch();
}

