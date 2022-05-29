#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

typedef struct{
int id; /// campo único y autoincremental
int nroCliente;
char nombre[30];
char apellido[30];
char dni[10];
char email[30];
char domicilio[45];
char movil[12];
int eliminado; /// 0 si está activo - 1 si está eliminado
}stClientes;

stClientes altaCliente();
void cargaArchivoClientes(char nombreArchivo[]);
void buquedaClienteXDni (char nombreArchivo[]);


#endif // CLIENTES_H_INCLUDED
