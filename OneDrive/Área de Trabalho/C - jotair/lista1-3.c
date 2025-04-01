#include <stdio.h>
int v(int);

int v(int n) {
    if (n > 1) {
        if (n % 2 == 0)
            return 2 * v(n - 1) - v(n - 2);
        else
            return v(n - 1) - 2 * v(n - 2);
    } else if (n == 1) {
        return 1;
    } else {
        return 1;
    }
}

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    printf("Resultado = %d", v(n));
    return 0;
}