#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "menus.h"
#include "clientes.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a;
   
    CLIENTES *cliente1;
    int opcao = MenuPrincipal();

    if (opcao == 2)
        opcao = MenuClientes();
    if (opcao == 1)
        a = adicionarUsuario(cliente1,"clientes.csv");

    return 0;
}
