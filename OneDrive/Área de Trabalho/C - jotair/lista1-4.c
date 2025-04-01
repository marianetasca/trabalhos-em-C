#include <stdio.h>
float f (float a1, float r, float t)
{
if (t<=1)
 return a1;
else return r*f(a1, r, t-1);
}

int main() {
    float a1, r, t;

    printf("Digite o primeiro termo (a1): ");
    scanf("%f", &a1);

    printf("Digite(r): ");
    scanf("%f", &r);

    printf("Digite(t): ");
    scanf("%f", &t);

    printf("Resultado = %.2f\n", f(a1, r, t));

    return 0;
}

//a) 1,2,5 = 16.00
//b) 9,-3,4 = -243.00
//c) 7,1,10 = 7.00
//d) 1,0,5 = 0.00