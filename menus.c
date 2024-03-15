#include <stdio.h>
#include <stdlib.h>
#include "menus.h"

void separador()
{
    for (int i = 0 ; i< TAM_SEPARADOR; i++ ){  
        printf("*");
    }
    printf("\n");
    
}

int MenuPrincipal()
{
    int opcao;
   
    system("cls"); // <- opcao caso Windows

    for (int i = 0 ; i<  TAM_SEPARADOR; i++ ){
        if(i==12)
            printf(" Menu Principal ");
        if (i > 11 && i < 28)
            continue;
        printf("*");
    }
    printf("\n");

    printf("\t1. Venda\n\t2. Clientes\n\t3. Produtos\n\t9. Sair\n");
    separador();
    separador();
    printf("\nOpção -> ");
    
    scanf(" %d", &opcao );
    return opcao;
}

int MenuClientes()
{
    int opcao;
   
    system("cls"); // <- opcao caso Windows

    for (int i = 0 ; i<  TAM_SEPARADOR; i++ ){
        if(i==12)
            printf(" Clientes ");
        if (i > 11 && i < 28)
            continue;
        printf("*");
    }
    printf("\n");

    printf("\t1. Cadastrar novo cliente\n");
    printf("\t2. Atualizar pontuacao\n");
    printf("\t3. Atualizar cliente\n");
    printf("\t4. Listar clientes entre 18 e 25\n");
    printf("\t5. Listar clientes acima de 1000 pontos\n");
    separador();
    separador();
    printf("\nOpção -> ");
    
    scanf(" %d", &opcao );
    return opcao;
}