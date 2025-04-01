#include <stdio.h>
int main(){
    int n = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("O número %d é positivo", n);
    }
    else {
        printf("O número %d é negativo", n);
    }
}