//
// Created by Administrador on 4/5/2023.
//

#include "Remed.h"
#include<stdio.h>
#include<string.h>
void encargar(Remedio *remedios){
    int n, cant;
    char nom[50];
    float pre;
    printf("Ingrese cantidad de medicamentos a pedir:\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Ingrese nombre del medicamento a encargar:\n");
        scanf("%s", &nom);
        printf("Ingrese cantidad:\n");
        scanf("%d", &cant);
        pre = pre+factura(remedios, nom[50], cant);
    }
    printf("El costo total es de %.2f\n", pre);
}

float factura(Remedio *remedios, char nom[50], int cant){
    float pre;
    for(int i=0; i<30; i++){
        if(strcmp(nom, remedios[i].nombre) == 0){
            printf("Costo por el medicamento %s es de %.2f\n", remedios[i].nombre, remedios[i].precio*cant);
        }

    }
    return pre;
}