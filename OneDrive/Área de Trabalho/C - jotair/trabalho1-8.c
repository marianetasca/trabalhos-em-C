#include <stdio.h>
int main(){
    int inicio, fim;
    printf("Digite o inicial em polegadas: ");
    scanf("%d", &inicio);
    printf("Digite o valor final em polegadas: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("Erro! O valor inicial deve ser menor ou igual ao final.");
        return 1;
    }

    printf("\nTabela de Conversão: Polegadas para Centímetros\n");
    printf("-----------------------------------------------\n");
    printf(" Polegadas   |   Centímetros \n");
    printf("-----------------------------------------------\n");

    int i = inicio;
    while (i <= fim) {
        printf("     %2d      |    %.2f cm\n", i, i * 2.54);
        i++;  // Incrementa a polegada
    }
    return 0;
}