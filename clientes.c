#include <stdio.h>
#include "clientes.h"

int adicionarUsuario(CLIENTES *usuario, const char *arquivo) {
    FILE *ptr_arquivo = fopen(arquivo,"a");

    if (!ptr_arquivo) return 1;
    
    printf("Informe o cpf: ");
    fgets(usuario->cpf,14,stdin);
    printf("Informe o nome: ");
    fgets(usuario->nome,51,stdin);
    printf("Informe a data de nascimento no formato (dd mm aaaa): ");
    scanf("%d %d %d", &usuario->data_nascimento.dia,&usuario->data_nascimento.mes,&usuario->data_nascimento.ano);
    printf("Informe a idade: ");
    scanf("%d", &usuario->idade);
    printf("Informe o logradouro: ");
    fgets(usuario->endereco.logradouro,101,stdin);
    printf("Informe a cidade: ");
    fgets(usuario->endereco.logradouro,101,stdin);
    printf("Informe o estado: ");
    fgets(usuario->endereco.logradouro,3,stdin);

    usuario->pontos = 0;
    return 0;
}

void menuClientes() {

}