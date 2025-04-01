#include <stdio.h>

int main() {
    int n, num, maior;

    
    printf("Quantos números você deseja fornecer? ");
    scanf("%d", &n);

    printf("Digite o número 1: ");
    scanf("%d", &num);
    maior = num;


    for (int i = 2; i <= n; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    // Exibe o maior número
    printf("O maior número é: %d\n", maior);

    return 0;
}
