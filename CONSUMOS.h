#ifndef CONSUMOS_H_INCLUDED
#define CONSUMOS_H_INCLUDED

typedef struct{
int id; /// campo �nico y autoincremental
int idCliente;
int anio;
int mes; /// 1 a 12
int dia; /// 1 a � dependiendo del mes
int datosConsumidos; /// expresados en mb.
int baja; /// 0 si est� activo - 1 si est� eliminado
}stConsumos;




#endif // CONSUMOS_H_INCLUDED
