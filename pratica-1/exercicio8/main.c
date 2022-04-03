// Exercicio 8

#include <stdio.h>

void main(){
    int n, m, p;
    printf("Escreva um numero: ");
    scanf("%d",&n);
    for(m=0;m<=12;m++){
    p = n * m;
    printf("%d X %d = %d \n",n,m,p);
    }
    getch();
}
