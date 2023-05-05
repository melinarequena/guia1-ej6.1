
/*Un laboratorio produce 30 remedios que tiene codificados de 1 a 30 de los que se
conoce el código, nombre y precio. El cliente encarga varios medicamentos. Se
ingresa el nombre y la cantidad solicitada en el orden en que son requeridos por el
cliente.
Imprimir la factura ordenada por número de código con la siguiente información:
código, cantidad, nombre, precio y el total a pagar.*/

#include<stdio.h>
#include"Remed.h"
#include<stdlib.h>


int main(){
    Remedio *remedios = malloc(sizeof(Remedio));
    for(int i=0; i<30; i++){
        printf("Base de datos.\nIngrese:\n");
        printf("Codigo del medicamento %d\n", i+1);
        scanf("%d", &remedios[i].codigo);
        printf("Nombre del medicamento %d\n", i+1);
        scanf("%s", &remedios[i].nombre);
        printf("Precio del medicamento %d\n", i+1);
        scanf("%.2f", &remedios[i].precio);
    }
    encargar(remedios);
}
