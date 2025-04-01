#include <stdio.h>
int main() {
    printf("Digite um número: ");
    int n;
    scanf("%d", &n);
    if (n %2 == 0) {
        printf("O numero %d é par", n);
    } else {
        printf("O numero %d é impar", n);
    }
    return 0;
}