#include <stdio.h>
int main(){
    int estadoCivil;
    int idade, filhos, idadeMaisVelho;
    char nomeConjuge[50], cidade[50], sexo[10];
    float salario;

    printf("Escolha seu estado civil:\n");
    printf("1 - Solteiro(a)\n");
    printf("2 - Casado(a)\n");
    printf("3 - Divorciado(a)\n");
    printf("4 - Viúvo(a)\n");
    printf("Digite o número correspondente: ");
    scanf("%d", &estadoCivil);

    switch (estadoCivil)
    {
    case 1:
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("\nEstado civil: Solteiro(a)\n");
        printf("Idade: %d anos\n", idade);
        break;

    case 2:
        printf("Digite seu sexo: ");
        scanf("%s", sexo);
        printf("Digite o nome do cônjuge: ");
        scanf("%s", nomeConjuge);
        printf("\nEstado civil: Casado(a)\n");
        printf("Sexo: %s\n", sexo);
        printf("Nome do cônjuge: %s\n", nomeConjuge);
        break;

        case 3:
        printf("Digite a quantidade de filhos (0, caso não tenha): ");
        scanf("%d", &filhos);
        if (filhos > 0) {
            printf("Digite a idade do filho mais velho: ");
            scanf("%d", &idadeMaisVelho);
            printf("\nEstado civil: Divorciado(a)\n");
            printf("Quantidade de filhos: %d\n", filhos);
            printf("Idade do filho mais velho: %d anos\n", idadeMaisVelho);
        } else {
            printf("\nEstado civil: Divorciado(a)\n");
            printf("Não tem filhos.\n");
        }
        break;
        
        case 4:
        printf("Digite o nome da cidade onde mora: ");
        scanf("%s", cidade);
        printf("Digite seu salário: "); 
        scanf("%f", &salario);
        printf("\nEstado civil: Viúvo(a)\n");   
        printf("Cidade: %s\n", cidade);
        printf("Salário: %.2f\n", salario); 
        break;

    default:
        break;
    }
    return 0;
}