#include <stdio.h>
int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra %c é uma vogal", letra );
    }
    else {
        printf("A letra %c é uma consoante", letra);
    }
    return 0;
}