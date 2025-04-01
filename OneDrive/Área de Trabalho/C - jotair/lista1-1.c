#include <stdio.h>
int seq(int);

int seq(int n)
{
    if (n > 0)
        return 2*seq(n-1)+1;
    else 
        return 1;
}
int main(){
    int n;
    printf("Digite um valor inteiro:");
    scanf("%d", &n);
    printf("Resultado = %d", seq(n));
    return 0;
}