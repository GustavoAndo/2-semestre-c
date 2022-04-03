// Exercicio 9

#include <stdio.h>

void main()
{
    int n1, n2, o, r;
    do {
        printf("Escolha uma operacao: \n (1) Divisao \n (2) Resto da Divisao \n (3) Adicao \n (4) Multiplicacao \n (5) Subtracao \n");
        scanf("%d",&o);
    } while ((o<1 || o>5));
    printf("Escreva o primeiro numero: ");
    scanf("%d",&n1);
    printf("Escreva o segundo numero: ");
    scanf("%d",&n2);
    switch(o){
        case 1:
        r = n1/n2;
        break;
        case 2:
        r = n1%n2;
        break;
        case 3:
        r = n1+n2;
        break;
        case 4:
        r = n1*n2;
        break;
        case 5:
        r = n1-n2;
    }
    printf("Resultado: %d \n",r);
    getch();
}
