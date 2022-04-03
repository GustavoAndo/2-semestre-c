// BIBLIOTECAS

#include <stdio.h>

// EXERCICIO 4 (FUNCAO)

int transforma_binario_decimal(int v[5]){
    int n4, n3, n2, n1, n0;
    n4 = v[0] * 2 * 2 * 2 * 2;
    n3 = v[1] * 2 * 2 * 2;
    n2 = v[2] * 2 * 2;
    n1 = v[3] * 2;
    n0 = v[4];
    return n4 + n3 + n2 + n1 + n0;
}

// FUNCAOO MAIN (COM TODOS EXERCICIOS JUNTOS)

int main(){

    // EXERCICIO 1

    int v[10], k;
    for(k=0;k<10;k++){
        printf("Digite o %do numero: ", k+1);
        scanf("%d",&v[k]);
    }
    printf("\nNumeros digitados:\n");
    for(k=0;k<10;k++){
        printf("%d \n",v[k]);
    }
    printf("\n");

    // EXERCICIO 2

    int v2[10], k2, nenhum;
    for(k2=0;k2<10;k2++){
        printf("Digite o %do numero: ", k2+1);
        scanf("%d", &v2[k2]);
    }
    printf("\nOs numeros maiores que 20 foram: \n");
    nenhum = 0;
    for(k2=0;k2<10;k2++){
        if (v2[k2]>=20){
            printf("%d \n",v2[k2]);
            nenhum++;
        }
    }
    if(nenhum == 0){
        printf("Nao foi digitado nenhum numero maior que 20");
    }
    printf("\n\n");

    // EXERCICIO 3

    int v3[10], k3, par, valores, maior;
    float media, soma;
    valores = 0;
    soma = 0;
    for(k3=1;k3<=10;k3++){
        printf("Digite o %do Numero: ", k3);
        scanf("%d",&par);
        if (par%2==0){
            v3[valores] = par;
            valores++;
        }
    }
    for(k3=0;k3<valores;k3++){
        if (v3[k3]>maior){
            maior = v3[k3];
        }
        soma += v3[k3];
    }
    media = soma/valores;
    printf("\nQuantidade de valoreas pares armazenados: %d \n", valores);
    printf("O maior numero par encontrado: %d \n", maior);
    printf("Media dos valores armazenados: %.1f\n\n", media);

    // EXERCICIO 5

    int v4[5], k4, b;
    for(k4=0;k4<5;k4++){
        do {
            printf("Digite o %do (da esquerda para a direita) digito binario (apenas 0 e 1): ", k4+1);
            scanf("%d", &v4[k4]);
            if (v4[k4] != 0 && v4[k4] != 1) {
                printf("Digito incorreto! Digite apenas 0 e 1. \n");
            }
        } while (v4[k4] != 0 && v4[k4] != 1);
    }
    b = transforma_binario_decimal(v4);
    printf("\nO valor em decimal do numero binario digitado eh: %d\n\n", b);

    // EXERCICIO 6

    int n, k5;
    printf("Digite a quantidade de numeros a serem digitados: ");
    scanf("%d",&n);
    int v5[n];
    printf("\n");
    for(k5=0;k5<n;k5++){
        printf("Digite o %do numero: ", k5+1);
        scanf("%d", &v5[k5]);
    }
    printf("\nSequencia na ordem inversa: \n");
    for(k5=n-1;k5>=0;k5--){
        printf("%d \n", v5[k5]);
    }
    printf("\n");

    // EXERCICIO 7

    int v6[8], k6, n2;
    n2 = 1;
    for(k6=4;k6<8;k6++){
        printf("Digite o %do numero: ", n2);
        scanf("%d", &v6[n2+3]);
        n2++;
    }
    for(k6=0;k6<4;k6++){
        printf("Digite o %do numero: ", n2);
        scanf("%d", &v6[n2-5]);
        n2++;
    }
    printf("\nResultado:\n");
    for(n2=0;n2<8;n2++){
        printf("%d\n", v6[n2]);
    }
    printf("\n");

    // EXERCICIO 8

    int n3, k7, v7[10], confirmar;
    for(k7=0;k7<10;k7++){
        printf("Digite o %do numero: ", k7+1);
        scanf("%d",&v7[k7]);
    }
    confirmar = 0;
    printf("\nDigite um numero para encontrar sua posicao no vetor: ");
    scanf("%d", &n3);
    for (k7=0;k7<=10;k7++){
        if (v7[k7] == n3){
            if (confirmar > 0) {
                printf("Alem disso, o numero tambem foi encontrado na posicao [%d] do vetor\n", k7);
            } else{
                printf("O numero foi encontrado na posicao [%d] do vetor. \n", k7);
                confirmar++;
            }
        }
    }
    if (confirmar == 0){
        printf("O numero nao foi encontrado no vetor.\n");
    }
    printf("\n");

    // EXERCICIO 9

    int k8, k9, A[5], B[8], inicio;
    for(k8=0;k8<5;k8++){
        printf("Digite o %do numero de 5 para o vetor A: ", k8+1);
        scanf("%d",&A[k8]);
    }
    printf("\n");
    for(k8=0;k8<8;k8++){
        printf("Digite o %do numero de 8 para o vetor B: ", k8+1);
        scanf("%d",&B[k8]);
    }
    inicio = 1;
    printf("\nOs elementos comuns aos dois vetores foram: \n");
    for(k8=0;k8<8;k8++){
        for(k9=0;k9<5;k9++){
            if (B[k8] == A[k9]){
                if (inicio == 1){
                    printf("%d",B[k8]);
                    inicio--;
                } else {
                    printf(", %d",B[k8]);
                }
            }
        }
    }
    printf("\n\n");

    // EXERCICIO 10

    int k10, produto, somap, M[10], N[10];
    for(k10=0;k10<10;k10++){
        printf("Digite o %do numero de 10 para o vetor M: ", k10+1);
        scanf("%d",&M[k10]);
    }
    printf("\n");
    for(k10=0;k10<10;k10++){
        printf("Digite o %do numero de 10 para o vetor N: ", k10+1);
        scanf("%d",&N[k10]);
    }
    soma = 0;
    for(k10=0;k10<10;k10++){
        produto = M[k10] * N[k10];
        somap += produto;
    }
    printf("\nO produto escalar de M por N eh: %d\n\n", somap);

    // EXERCICIO 11

    int voltas, mtempo, mtvolta, k11;
    float tmedio, somat;
    printf("Digite o numero de voltas do piloto: ");
    scanf("%d",&voltas);
    int tempo[voltas];
    printf("\n");
    for(k11=0;k11<voltas;k11++){
        printf("Digite o tempo em que o piloto completou a %do volta em segundos: ", k11+1);
        scanf("%d",&tempo[k11]);
        if (k11==0){
            mtempo = tempo[k11];
            mtvolta = k11+1;
        }
        if (tempo[k11]<mtempo){
            mtempo = tempo[k11];
            mtvolta = k11+1;
        }
        somat += tempo[k11];
    }
    tmedio = somat/voltas;
    printf("\nMelhor tempo: %d segundos\n", mtempo);
    printf("Numero da volta em que o melhor tempo ocorreu: %d \n", mtvolta);
    printf("Tempo medio das voltas: %.2f \n\n", tmedio);

    // EXERCICIO 12

    int v8[10],k12, contzero;
    for (k12=0;k12<10;k12++){
        printf("Digite o %do numero: ",k12+1);
        scanf("%d",&v8[k12]);
    }
    contzero = 0;
    printf("\nResultado:\n");
    for (k12=0;k12<10;k12++){
        if (v8[k12] != 0){
            printf("%d\n", v8[k12]);
        }
        else {
           contzero++ ;
        }
    }
    for (k12=0;k12<contzero;k12++){
        printf("0\n");
    }
    printf("\n");

    // EXERCICIO 13

    int n4, k13, k14, a, cont;
    cont = 0;
    printf("Digite a quantidade de numeros da lista: ");
    scanf("%d", &n4);
    float v9[n4];
    printf("\n");
    for(k13=0;k13<n4;k13++){
        printf("Digite o %do numero: ", k13+1);
        scanf("%f",&v9[k13]);
    }
    for(k13=0;k13<n4;k13++){
        for(k14=k13+1;k14<n4;k14++){
            if(v9[k13]>v9[k14]){
                a=v9[k13];
                v9[k13]=v9[k14];
                v9[k14]=a;
            }
        }
    }
    cont = 1;
    printf("\n");
    for(k13=1; k13<n4; k13++){
        if(v9[k13] == v9[k13-1]){
            cont++;
        }
        else {
            printf("O numero %.1f ocorre %d vez(es)!\n", v9[k13-1], cont);
            cont = 1;
        }
    }
    printf("O numero %.1f ocorre %d vez(es)!\n", v9[k13-1], cont);

    getch();
}
