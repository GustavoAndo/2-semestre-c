#include <stdio.h>
#include <time.h>

void main()
{
    //EXERCICIO 1
    int m[5][5], i, j;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (i == j){
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }
        }
    }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //EXERCICIO 2
    int matriz[4][4], a, b, l, c, sl, sc;
    for (a=0;a<4;a++){
        for (b=0;b<4;b++){
            matriz[a][b] = rand() % 21;
        }
    }
    for (a=0;a<4;a++){
        for (b=0;b<4;b++){
            if( matriz[a][b]<10){
                printf(" %d ", matriz[a][b]);
            } else {
                printf("%d ", matriz[a][b]);
            }
        }
        printf("\n");
    }
    //ITEM A
    do {
        printf("\nDigite a linha que quer imprimir (1 a 4): ");
        scanf("%d",&l);
        if (l<1 || l>4){
            printf("Numero invalido! Digite apenas numeros de 1 a 4!\n");
        }
    } while (l<1 || l>4);
    for (a=0;a<4;a++){
        printf("%d ", matriz[l-1][a]);
    }
    //ITEM B
    do {
        printf("\n\nDigite a coluna que quer imprimir (1 a 4): ");
        scanf("%d",&c);
        if (c<1 || c>4){
            printf("Numero invalido! Digite apenas numeros de 1 a 4!");
        }
    } while (c<1 || c>4);
    for (a=0;a<4;a++){
        if( matriz[a][c-1]<10){
            printf(" %d ", matriz[a][c-1]);
        } else {
            printf("%d ", matriz[a][c-1]);
        }
        printf("\n");
    }
    //ITEM C
    do {
        printf("\nDigite a linha que quer a soma de todos elementos (1 a 4): ");
        scanf("%d",&l);
        if (l<1 || l>4){
            printf("Numero invalido! Digite apenas numeros de 1 a 4!\n");
        }
    } while (l<1 || l>4);
    for (a=0;a<4;a++){
        sl += matriz[l-1][a];
    }
    printf("%d", sl);
    //ITEM D
    do {
        printf("\n\nDigite a coluna que quer a soma de todos elementos (1 a 4): ");
        scanf("%d",&c);
        if (c<1 || c>4){
            printf("Numero invalido! Digite apenas numeros de 1 a 4!");
        }
    } while (c<1 || c>4);
    for (a=0;a<4;a++){
        sc += matriz[a][c-1];
    }
    printf("%d", sc);
    //ITEM E
    printf("\n\nMatriz Transposta:\n");
    for (a=0;a<4;a++){
        for (b=0;b<4;b++){
            if( matriz[b][a]<10){
                printf(" %d ", matriz[b][a]);
            } else {
                printf("%d ", matriz[b][a]);
            }
        }
        printf("\n");
    }
    getch();
}
