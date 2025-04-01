#include <stdio.h>
int seq(int);

int seq(int u)
{
    if (u > 1)
        return 2 * seq(u - 1) - 3 * seq(u - 2);
    else if (u == 1)
        return 2;
    else
        return 1;
}
int main()
{
    int u;
    printf("Digite um valor inteiro:");
    scanf("%d", &u);
    printf("Resultado = %d", seq(u));
    return 0;
}