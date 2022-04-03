// Exercicio 6

#include <stdio.h>

void main(){
    int n1, n2, n3, troca;
    printf("n1: ");
    scanf("%d",&n1);
    printf("n2: ");
    scanf("%d",&n2);
    printf("n3: ");
    scanf("%d",&n3);
    if (n1 > n3) {
        troca = n3;
        n3 = n1;
        n1 = troca;
    }
    if (n1 > n2) {
        troca = n2;
        n2 = n1;
        n1 = troca;
    }
    if (n2 > n3) {
        troca = n3;
        n3 = n2;
        n2 = troca;
    }
    printf("%d %d %d", n1, n2, n3);
    getch();
}
