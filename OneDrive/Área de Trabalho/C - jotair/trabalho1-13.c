#include <stdio.h>
int main()
{
    float valorUnitario, totalCompra = 0, desconto, totalComDesconto;
    int quantidade, pagamento, totalItens = 0;

    do
    {
        printf("Informe o valor unitario do produto (Digite um valor menor ou igual a 0 para encerrar): R$ ");
        scanf("%f", &valorUnitario);

        if (valorUnitario > 0)
        {
            printf("Digite a quantidade comprada: ");
            scanf("%d", &quantidade);

            totalCompra += valorUnitario * quantidade;
            totalItens += quantidade;
        }

    } while (valorUnitario > 0);

    printf("\nTotal de itens comprados: %d\n", totalItens);
    printf("Valor total da compra: R$ %.2f\n", totalCompra);

    if (totalCompra > 0)
    {
        printf("\nEscolha a forma de pagamento:\n");
        printf("1. Dinheiro\n");
        printf("2. Cartão Débito\n");
        printf("3. Cartão Crédito\n");
        scanf("%d", &pagamento);
    }

    switch (pagamento)
    {
    case 1: // dinheiro
        desconto = totalCompra * 0.10;
        totalComDesconto = totalCompra - desconto;
        printf("Forma de pagamento: Dinheiro\n");
        printf("Desconto: 10%%\n");
        printf("Desconto obtido: R$ %.2f\n", desconto);
        printf("Total a pagar: R$ %.2f\n", totalComDesconto);
        break;

    case 2: // cartao de debito
        desconto = totalCompra * 0.05;
        totalComDesconto = totalCompra - desconto;
        printf("Forma de pagamento: Cartão Débito\n");
        printf("Desconto: 5%%\n");
        printf("Desconto obtido: R$ %.2f\n", desconto);
        printf("Total a pagar: R$ %.2f\n", totalComDesconto);
        break;

    case 3:                             // cartao de credito
        totalComDesconto = totalCompra; // sem desconto
        printf("Forma de pagamento: Cartão Crédito\n");
        printf("Total a pagar: R$ %.2f\n", totalComDesconto);
        break;
    default:
        printf("Opção inválida!\n");
        break;

    }

    if (totalCompra == 0) {
        printf("\nNenhuma compra realizada.\n");
    }

    printf("\nTotal de itens vendidos no dia: %d\n", totalItens);
    printf("Total de vendas no dia (sem descontos): R$ %.2f\n", totalCompra);
    
    return 0;
}