#include <stdio.h>
struct Data
{
    int dia;
    int mes;
    int ano;
};

struct conta
{
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
    struct Data ultpag;
} clienteNovo, clienteAntigo;

int main (){
    fflush(stdin); //antes do scanf somente quando for string e char
    struct conta vcliente[100];
    int n, i;
    printf("Digite o numero de clientes: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Digite o numero da conta: ");
        scanf("%d", &vcliente[i].num_conta);

        printf("digite o tipo de conta: ");
        scanf(" %c", &vcliente[i].tipo_conta);
        
        printf("digite o nome: ");
        scanf(" %s", vcliente[i].nome);

        printf("digite o saldo da conta: ");
        scanf(" %f", &vcliente[i].saldo);
    }

    printf("\nlimprime dados dos clientes");
    printf("\nNro Cta Tipo Cta Nome Cliente Saldo Cta");
    for(i=0;i<n;i++)
    {
        printf("\n%3d   %c    %s     %.2f",vcliente[i].num_conta, vcliente[i].tipo_conta,vcliente[i].nome,vcliente[i].saldo);
    }
    
    return 0;
}