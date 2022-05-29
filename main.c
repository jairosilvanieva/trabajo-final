#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLIENTES.h"
#include "CONSUMOS.h"

int main(int argc, char *argv[])
{
    stClientes cliente;
    stConsumos consumo;
    int selected;
    int id= 0;
    do
    {
        selected = menu();
        switch(selected)
        {
        case 1:
            //funcion_x();
            break;
        case 2:
            cargaArchivoClientes("clientes.dat");
            break;
        case 3:
            funcion_x();
            break;
        case 4:
            funcion_x();
            break;
        case 5:
            funcion_x();
            break;
        case 6:
            system("cls");
            muestraArchivoCliente("clientes.dat");
            system("pause");
            break;
        case 7:
            funcion_x();
            break;
        case 8:
            funcion_x();
            break;
        case 9:
            funcion_x();
            break;
        case 10:
            funcion_x();
            break;
        case 11:
            funcion_x();
            break;
        case 12:
            funcion_x();
            break;
        case 13:
            funcion_x();
            break;
        case 14:
            buquedaClienteXDni ("clientes.dat");
            system("pause");
            break;
        case 0:
            printf("\n\nSALIR DEL SISTEMA \n");

            break;
        }

    }
    while(selected!=0);

    system("PAUSE");
    return 0;
}
