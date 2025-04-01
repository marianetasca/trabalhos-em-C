#include <stdio.h>
int main(){
    int n = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("O numero %d eh positivo", n);
    }
    else {
        printf("O numero %d eh negativo", n);
    }
    return 0;
}