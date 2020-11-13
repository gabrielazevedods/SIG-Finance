#include <stdio.h>
#include "menus.h"
#include "cadastros.h"
#include <ctype.h>
#include <string.h>

// funções do menu cliente

void cadastraCliente (void) {

    char opcao2;
    char nome[100];
    int data[3];
    int dia = data[0];
    int mes = data[1];
    int ano = data[2];
    char email[50];
    char cpf[15];

    printf("\nDigite seu nome: ");
    scanf("%s", nome); // função que pega tudo o que foi digitado
    getchar();
    validaNome(nome);
    while((validaNome(nome))) {
        printf("Nome invalido, digite novamente: ");
        gets(nome);
    }

    printf("\nDigite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    getchar();
    dataValida(dia, mes, ano);
    while(!dataValida(data[0], data[1], data[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    }

    printf("\nDigite seu email: ");
    gets(email);
    validaEmail(email);
    while(!(validaEmail(email))){
        printf("Email invalido, digite novamente: ");
        gets(email);
    }

    printf("\nDigite seu CPF: (xxxxxxxxxxx): ");
    gets(cpf);
    validaCpf(cpf);
    while(!(validaCpf(cpf))){
        printf("CPF invalido, digite novamente: ");
        gets(cpf);
    }

    printf("\nUsuario cadastrado!\n");
    pausaPrograma();
    menuCliente();
}

void listaCliente (void) {
    char opcao2;
    printf("\nVocê entrou no Lista Cliente\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuCliente();

}

void buscaCliente (void) {
    char opcao2;
    printf("\nVocê entrou no Busca Cliente\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuCliente();
}
void alteraCliente (void) {
    char opcao2;
    printf("\nVocê entrou no Altera Cliente\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuCliente();
}

void deletaCliente (void) {
    char opcao2;
    printf("\nVocê entrou no Deleta Cliente\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuCliente();
}

// funções do menu despesa

void cadastraDespesa (void) {

    char opcao2;
    float valor;
    char descricao[1000];
    char categoria[100];
    int data[3];
    int dia = data[0];
    int mes = data[1];
    int ano = data[2];


    printf("\nValor da despesa: ");
    scanf("%f", &valor);
    getchar();

    printf("\nDescricao: ");
    scanf("%s", descricao);
    getchar();

    printf("\nCategoria: ");
    scanf("%s", categoria);
    getchar();

    printf("\nData (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    getchar();
    dataValida(dia, mes, ano);
    while(!dataValida(data[0], data[1], data[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    }

    printf("\nDespesa cadastrada!\n");
    pausaPrograma();
    menuDespesa();
}

void listaDespesa (void) {
    char opcao2;
    printf("\nVocê entrou no Lista Despesa\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuDespesa();
}

void buscaDespesa (void) {
    char opcao2;
    printf("\nVocê entrou no Busca Despesa\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuDespesa();
}
void alteraDespesa (void) {
    char opcao2;
    printf("\nVocê entrou no Altera Despesa\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuDespesa();
}

void deletaDespesa (void) {
    char opcao2;
    printf("\nVocê entrou no Deleta Despesa\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuDespesa();
}

// funções do menu Receita

void cadastraReceita (void) {

    char opcao2;
    float valor;
    char descricao[1000];
    char categoria[1000];
    int data[3];
    int dia = data[0];
    int mes = data[1];
    int ano = data[2];


    printf("\nValor da receita: ");
    scanf("%f", &valor);
    getchar();

    printf("\nDescricao: ");
    scanf("%s", descricao);
    getchar();

    printf("\nCategoria: ");
    scanf("%s", categoria);
    getchar();

    printf("\nData (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    getchar();
    dataValida(dia, mes, ano);
    while(!dataValida(data[0], data[1], data[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    }

    printf("\nReceita cadastrada!\n");
    pausaPrograma();
    menuReceita();
}

void listaReceita (void) {
    char opcao2;
    printf("\nVocê entrou no Lista Receita\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuReceita();
}

void buscaReceita (void) {
    char opcao2;
    printf("\nVocê entrou no Busca Receita\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuReceita();
}
void alteraReceita (void) {
    char opcao2;
    printf("\nVocê entrou no Altera Receita\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuReceita();
}

void deletaReceita (void) {
    char opcao2;
    printf("\nVocê entrou no Deleta Receita\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuReceita();
}

// funções do menu Relatorio

void relatorioDiario (void) {
    char opcao2;
    printf("\nVocê entrou no Relatorio Diario\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuRelatorio();
}

void relatorioSemanal (void) {
    char opcao2;
    printf("\nVocê entrou no Relatorio Semanal\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuRelatorio();
}

void relatorioMensal (void) {
    char opcao2;
    printf("\nVocê entrou no Relatorio Mensal\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuRelatorio();
}

void relatorioAnual (void) {
    char opcao2;
    printf("\nVocê entrou no Relatorio Anual\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuRelatorio();
}

void escolherPeriodo (void) {
    char opcao2;
    printf("\nVocê entrou no Escolher Periodo\n ");
    printf("\nTecle ENTER para voltar");
    opcao2 = getchar();
    menuRelatorio();
}

// função do menu Sobre

void pausaPrograma(void) {

    printf("\nTecle ENTER para voltar");
    getchar();

}