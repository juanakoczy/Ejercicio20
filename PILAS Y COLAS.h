//
// Created by Usuario on 23/8/2023.
//

#ifndef EJERCICIO_20_PILAS_Y_COLAS_H
#define EJERCICIO_20_PILAS_Y_COLAS_H

typedef struct nodo {
    int dato;
    struct nodo * sig;
}Nodo;

typedef struct cola{
    Nodo * cabecera;
    Nodo * cola;
}Cola;

typedef struct pila{
    Nodo * arriba;
}Pila;

Nodo * newNodo (int dato);
Cola * newCola ();
Pila * newPila();

void encolar (Cola * cola, Nodo * nodo);
Nodo * desencolar (Cola * cola);
void apilar (Pila * pila,Nodo * nodosaliente);
Nodo * desapilar (Pila * pila);
void imprimirCola (Cola * cola);
void imprimirPila (Pila * pila);

#endif //EJERCICIO_20_PILAS_Y_COLAS_H
