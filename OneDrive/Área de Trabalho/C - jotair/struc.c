#include <stdio.h>
struct registro {
char *nome;
int num_conta;
char tipo_conta;
float saldo;
};
void ajuste(struct registro *pt);
void imprime(struct registro *pt);
int main(void) {
struct registro cliente = { "Silva", 3333, 'C', 33.33};
imprime(&cliente);
ajuste(&cliente);
imprime(&cliente);
return 0;
}
void imprime(struct registro *pt){
printf("\n\nNome: %s\n", pt->nome);
printf("Conta: %d\n", pt->num_conta);
printf("Tipo conta: %c\n", pt->tipo_conta);
printf("Saldo: %.2f\n\n", pt->saldo);
}
void ajuste(struct registro *pt){
pt->nome = "Jonas";
pt->num_conta = 999;
pt->tipo_conta = 'R';
pt->saldo = 99.99;
}