#include <stdio.h>
int main(){
    int precoChocolate = 2, quantidade, total, pagamento, troco;
    int notas50, notas20, notas10, notas5, notas2, moedas1;
    printf("Informe a quantidade de chocolate a ser comprado: ");
    scanf("%d", &quantidade);

    total = precoChocolate * quantidade;
    printf("Total da compra: R$ %d\n", total);

    printf("Insira o valor do pagamento em cédulas (apenas 2, 5, 10, 20 ou 50): ");
    scanf("%d", &pagamento);

    if (pagamento < total){
        printf("Pagamento insuficiente. Tente novamente.\n");
        return 1;
    }

    troco = pagamento - total;
    printf("Troco a ser devolvido: R$ %d\n", troco);

    notas50 = troco/50;
    troco %= 50;
    
    notas20 = troco/20;
    troco %= 20;
    
    notas10 = troco/10;
    troco %= 10;
    
    notas5 = troco/5;
    troco %= 5;
    
    notas2 = troco/2;
    troco %= 2;
    
    moedas1 = troco;

    printf("Troco fornecido:\n");
    if (notas50 > 0) printf("%d cédula(s) de R$ 50\n", notas50);
    if (notas20 > 0) printf("%d cédula(s) de R$ 20\n", notas20);
    if (notas10 > 0) printf("%d cédula(s) de R$ 10\n", notas10);
    if (notas5 > 0) printf("%d cédula(s) de R$ 5\n", notas5);
    if (notas2 > 0) printf("%d cédula(s) de R$ 2\n", notas2);
    if (moedas1 > 0) printf("%d moeda(s) de R$ 1\n", moedas1);

    return 0;
}