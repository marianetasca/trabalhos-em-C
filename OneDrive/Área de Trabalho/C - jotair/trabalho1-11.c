#include <stdio.h>
int main(){
    double cidadeA = 90000, cidadeB = 50000;
    double taxaA = 0.009, taxaB = 0.015;
    int anos = 0;
    while (cidadeB <= cidadeA) {
        cidadeA = cidadeA + ( cidadeA * taxaA);
        cidadeB = cidadeB + ( cidadeB * taxaB);
        anos++;
    }
    printf("Serão necessários %d anos para que a cidade B ultrapasse a cidade A.", anos);

    return 0;
}