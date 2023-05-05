//
// Created by Administrador on 4/5/2023.
//

#ifndef GUIA1_EJ6_3_REMED_H
#define GUIA1_EJ6_3_REMED_H

typedef struct{
    int codigo;
    char nombre[50];
    float precio;
}Remedio;

void encargar(Remedio *remedios);
float factura(Remedio *remedios, char[50], int);

#endif //GUIA1_EJ6_3_REMED_H
