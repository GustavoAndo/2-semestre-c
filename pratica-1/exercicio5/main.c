// Exercicio 5

#include <stdio.h>

void main(){
    int n;
    printf("Escreva um numero: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("O numero escrito foi %d e ele e um numero par \n",n);
    } else {
        printf("O numero escrito foi %d e ele e um numero impar \n",n);
    }
    getch();
}
