#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int TAM_SEPARADOR = 40;

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
int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
   
    int opcao = MenuPrincipal();
    return 0;
}