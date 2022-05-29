#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLIENTES.h"
#include "CONSUMOS.h"

int menu()
{
    system("color 07");
    int input;
    system("cls");
    printf("\nCompania telefonia DONDESUCEDELAMAGIA");
    printf("\n----------");
    printf("\nMENU");
    printf("\n-----------");
    printf("\n1-CLIENTES");
    printf("\n2-ALTA DE CLIENTES");///echo
    printf("\n3-BAJAS DE CLIENTES");
    printf("\n4-MODIFICACION DE CLIENTES");
    printf("\n5-CONSULTA DE CLIENTES");
    printf("\n6-LISTADO DE CLIENTES"); /// echo
    printf("\n7-ALTA DE CONSUMO");
    printf("\n8-BAJA DE CONSUMOS");
    printf("\n9-MODIFICACION DE CONSUMO");
    printf("\n10-CONSULTA DE CONSUMO");
    printf("\n11-LISTADO DE CONSUMO");
    printf("\n12-CONSUMO DEL AÑO A LA FECHA");
    printf("\n13-BUSCAR CONSUMO POR FECHA");
    printf("\n14-BUSCAR CLIENTE"); ///echo
    printf("\n0-QUIT");
    printf("\n\nENTER YOUR CHOICE: ");
    scanf("%d",&input);
    return input;
}
stClientes altaCliente(){
    stClientes c;
printf("\n Carga un cliente\n ");

printf("Carga id cliente...............: ");
scanf("%d", &c.id);

printf("Carga numero de cliente........: ");
scanf("%d", &c.nroCliente);

fflush(stdin);
printf("Carga nombre de cliente........: ");
gets(c.nombre);

fflush(stdin);
printf("Carga apellido de cliente......: ");
gets(c.apellido);

fflush(stdin);
printf("Carga dni de cliente...........: ");
gets(c.dni);

fflush(stdin);
printf("Carga email de cliente.........: ");
gets(c.email);

fflush(stdin);
printf("Carga domicilio de cliente.....: ");
gets(c.domicilio);

fflush(stdin);
printf("Carga celular de cliente.......: ");
gets(c.movil);

c.eliminado = 0;

return c;
}

void cargaArchivoClientes(char nombreArchivo[] ){

 FILE *clientes = fopen(nombreArchivo,"ab" );
 stClientes cliente;

 char opcion;

 if (clientes != NULL){
    do {
        system("cls");
        cliente = altaCliente();
        fwrite(&cliente,sizeof (stClientes),1,clientes);
        printf("\n Cliente cargado con exito\n");
        printf("\n ESC para terminar carga de datos");
        opcion = getch();
        }while(opcion != 27);
    }
    fclose(clientes);
    }

void muestraArchivoCliente (char nombreArchivo[]){
FILE *clientes = fopen(nombreArchivo , "rb");

stClientes cliente;

if (clientes != NULL){
    while (fread(&cliente, sizeof (stClientes), 1 , clientes)>0){
        muestraCliente(cliente);
    }

}
fclose(clientes);

}


void muestraCliente(stClientes cliente){
printf("ID cliente............: %d\n", cliente.id);
printf("Numero de cliente.....: %d\n", cliente.nroCliente);
printf("Nombre de cliente.....: %s\n", cliente.nombre);
printf("Apellido de cliente...: %s\n", cliente.apellido);
printf("Dni de cliente........: %s\n", cliente.dni);
printf("Email de cliente......: %s\n", cliente.email);
printf("Domicilio de cliente..: %s\n", cliente.domicilio);
printf("Celular de cliente....: %s\n", cliente.movil);
printf("\n===================================================\n");

}

void buquedaClienteXDni (char nombreArchivo[]){

FILE *clientes = fopen(nombreArchivo , "rb");
stClientes cliente;
char dni[20];
printf("\n Ingrese el numero de DNI del cliente : \n");
fflush(stdin);
gets(dni);
int flag = 0;
if (clientes != NULL){
    while (fread(&cliente, sizeof (stClientes), 1 , clientes)>0) {
        if (strcmp(cliente.dni, dni)== 0 && flag==0 ){
            muestraCliente(cliente);
            flag=1;
        }
    }
if (flag == 0){
    printf("\n\nEl dni no se encontro\n");
}
}
fclose(clientes);


}





funcion_x()
{
    system("cls");
    system("color 1E");
    printf("\n\naca deberia estar la funcion pedida en cada ejercicio de la practica\n");
    system("PAUSE");
}
