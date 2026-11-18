#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// ESTRUTURA DA CONTA

typedef struct {
    int numero;
    int tipo;
    float saldo;
} Conta;



// ESTRUTURA DO HISTORICO

typedef struct {
    char descricao[100];
} Historico;



// ESTRUTURA DO CLIENTE

typedef struct {
    char nome[50];

    Conta contas[3];
    int qtdeContas;

    Historico historico[100];
    int qtdeHistorico;

    int emprestimo_realizado;
} Cliente;



// VARIAVEIS GLOBAIS

Cliente clientes[100];

int qtdeCliente = 0;
int numeroDaConta = 1000;
int bancoAberto = 0;



// FUNCAO PRINCIPAL

int main() {

  
    printf("          CAIXA DIGITAL         \n");
 

    printf("SISTEMA DEU BOM BOY!\n");

    return 0;
}