#include <stdio.h>
int main(){
    char nome[20][50];
    int idade[20];
    char sexo[20];
    int i = 0;
    do {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", nome[i]);  

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]); 

        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &sexo[i]); 

        i++;
    }while (i < 20);
    printf("\n-----PESSOAS DO SEXO MASCULINO COM MAIS DE 21 ANOS-----\n");

    i = 0;
    do {
        if ((sexo[i] == 'M' || sexo[i] == 'm') && idade[i] > 21) {
            printf("Nome: %s, Idade: %d\n", nome[i], idade[i]);
        }
        i++;
    }while (i < 20);

    return 0;


}