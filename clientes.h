#ifndef CLIENTES_H
#define CLIENTES_H
#include "tempo.h"

typedef struct endereco
{
    char logradouro[101], cidade[100], estado[3];
} ENDERECO;

typedef struct clientes
{
    int idade, pontos;
    DATA data_nascimento;
    ENDERECO endereco;
    char cpf[14], nome[51];
} CLIENTES;


/**
 * funcao que adiciona usuario
 * retorna nulo se nao for possivel adicionar 
*/
int adicionarUsuario(CLIENTES *usuario, const char *arquivo);
















#endif