#include <stdio.h>
int main(){
    int n, num, maior;

    printf("Quantos numeros deseja fornecer? ");
    scanf("%d", &n);

    printf("Digite o numero 1: ");
    scanf("%d", &num);
    maior = num;

    for (int i = 2; i < n; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }
    printf("O maior numero é: %d\n", maior);

    return 0;
}
