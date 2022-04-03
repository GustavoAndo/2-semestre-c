#include <stdio.h>
#include <string.h>

// FUNCAO DO EXERCICIO 2

char invertido (char palavra[50]){
    char contrario[10];
    int j = 0;
    for(int i=strlen(palavra)-1; i>=0;i--){
        contrario[j] = palavra[i];
        j++;
    }
    contrario[j] = '\0';
    printf("A string invertida eh: %s\n\n", contrario);
    return contrario;
}

// FUNCAO DO EXERCICIO 3

int palindromo (char palavra[50]){
    char contrario[10];
    int j = 0;
    for(int i=strlen(palavra)-1; i>=0;i--){
        contrario[j] = palavra[i];
        j++;
    }
    contrario[j] = '\0';
    if (strcmp(palavra, contrario) == 0){
        return 1;
    }
    return 0;
}

void main()
{
    // EXERCICIO 1

    char str[100];
    int tamanho;
    do{
        printf("Digite uma mensagem: ");
        gets(str);
        tamanho = strlen(str);
        if (tamanho > 40){
            printf("Erro! Mensagem com mais de 40 caracteres.\n\n");
        } else{
            for(int i=0; i<=tamanho; i++){
                printf("\n%c", str[i]);
            }
        }
    } while(tamanho>40);

    // EXERCICIO 2

    char str2[50];
    printf("\nDigite uma string para ser invertida: ");
    gets(str2);
    invertido(str2);

    // EXERCICIO 3

    char str3[50];
    int p;
    printf("Digite uma string: ");
    gets(str3);
    p = palindromo(str3);
    if (p == 1){
        printf("A string %s eh um palindromo!\n", str3);
    } else {
        printf("A string %s nao eh um palindromo!\n", str3);
    }

    // EXERCICIO 4

    char nome[100];
    printf("\nInsira seu nome: ");
    gets(nome);

    // ITEM A
    int ncaracter=0;
    for(int j=0; nome[j]!='\0'; j++){
        ncaracter++;
    }
    printf("\nSeu nome possui %d caracteres\n\n", ncaracter);

    // ITEM B

    int nvogal, nconsoante, nespaco;
    nvogal = 0;
    nconsoante = 0;
    nespaco = 0;
    for(int k=0; nome[k]!='\0'; k++){
        if (nome[k] == ' '){
            nespaco++;
        } else {
            if((nome[k] == 'a') || (nome[k] == 'e') || (nome[k] == 'i') || (nome[k] == 'o') || (nome[k] == 'u') || (nome[k] == 'A') || (nome[k] == 'E') || (nome[k] == 'I') || (nome[k] == 'O') || (nome[k] == 'U')){
                nvogal++;
            } else {
                nconsoante++;
            }
        }
    }
    printf("Seu nome possui %d vogais\n", nvogal);
    printf("Seu nome possui %d consoantes\n", nconsoante);
    printf("Seu nome possui %d espacos em branco\n", nespaco);

    // ITEM C

    char novonome[100];
    int cont=0;
    for(int l=0; nome[l]!='\0'; l++){
        if ((nome[l] != ' ') && (nome[l] != 'a') && (nome[l] != 'e') && (nome[l] != 'i') && (nome[l] != 'o') && (nome[l] != 'u') && (nome[l] != 'A') && (nome[l] != 'E') && (nome[l] != 'I') && (nome[l] != 'O') && (nome[l] != 'U')){
            novonome[cont] = nome[l];
            cont++;
        }
    }
    novonome[cont] = '\0';
    printf("\nSeu nome seu vogal e espa�os eh: %s\n", novonome);

    // ITEM D

    char caracter;
    printf("\nDigite um caractere para ser substituido em seu nome: ");
    scanf("%c", &caracter);
    for(int m=0; nome[m]!='\0'; m++){
        if (nome[m] == caracter){
            nome[m] = '*';
        }
    }
    printf("Resultado: %s\n", nome);

    getch();
}
