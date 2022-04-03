#include <stdio.h>
#include <string.h>

// FUNCAO EXERCICIO 9
int concatena(char *str_destino, char *str_origem){
    int tam = strlen(str_destino);
    for(int i = 0; i <= strlen(str_origem); i++){
        *(str_destino+i+tam) = str_origem[i];
    }
    return 0;
}

void main(){
    // EXERCICIO 8
    int num1, num2, troca;
    num1 = 100;
    num2 = 200;
    printf ("Antes valiam %d %d",num1,num2);
    troca = num1;
    num1 = num2;
    num2 = troca;
    printf ("\nEles agora valem %d %d\n\n",num1,num2);

    // EXERCICIO 9
    char s1[100], s2[200], *p, *q;
    printf("Digite uma string: ");
    gets(s1);
    printf("Digite outra string: ");
    gets(s2);
    p = s1;
    q = s2;
    concatena(p, q);
    printf("A string concatenada ficou: %s", p);

    getch();
}
