#include <stdio.h>
int main(){
    int quantidade, regiao;
    float precoItem = 5.00, frete, total, totalComFrete;
    char *nomeRegiao;

    printf("Digite a quantidade de itens(max 100): ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 100){
        printf("Quantidade inválida!");
        return 1;
    }

    printf("Digite sua região sendo Norte(1), Nordeste(2), Centro-Oeste(3), Sudeste(4), Sul(5):");
    scanf("%d", &regiao);

    total = precoItem * quantidade;
    switch (regiao)
    {
    case 1:
        frete = total*0.10;
        nomeRegiao = "Norte";
        break;

        case 2:
        frete = total*0.08;
        nomeRegiao = "Nordeste";
        break;
        
        case 3:
        frete = total*0.12;
        nomeRegiao = "Centro-Oeste";
        break;

        case 4:
        frete = total*0.15;
        nomeRegiao = "Sudeste";
        break;
        
        case 5:
        frete = total*0.11;
        nomeRegiao = "Sul";
        break;
    
    default:
        break;
    }
    totalComFrete = total + frete;
    printf("\n----RESUMO DA COMPRA----\n");
    printf("Região da entrega: %s\n", nomeRegiao);
    printf("Total a pagar sem o frete: %.2f\n", total);
    printf("Frete: R$ %.2f\n", frete);
    printf("Total a pagar com o frete: %.2f\n", totalComFrete);

    return 0;

}