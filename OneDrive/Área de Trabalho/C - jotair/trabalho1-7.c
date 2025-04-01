#include <stdio.h>
int main(){
    float numeros [10], metade, soma = 0; 
    for (int i = 0; i < 10; i++) {
        printf("digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i]; 
    }
    printf("metade dos numeros:\n ");
    for (int i = 0; i < 10; i++) {
        metade = (float)numeros[i]/2;

        printf("a metade do numero %d é %.2f\n", i +1, metade);
    }
    printf("media: %f", soma/10);
    return 0;

}