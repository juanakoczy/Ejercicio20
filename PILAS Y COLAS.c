//
// Created by Usuario on 23/8/2023.
//

#include "PILAS Y COLAS.h"
#include <stdio.h>
#include "malloc.h"


Nodo * newNodo (int dato){
    Nodo * aux = NULL;
    aux = malloc (sizeof(Nodo));

   if (aux == NULL){
       printf ("No hay espacio de memoria suficiente");
       exit (-1);
   }
   aux->dato = dato;
   aux->sig = NULL;

   return aux;
}


Cola * newCola (){
    Cola * aux = NULL;
    aux = malloc (sizeof (Cola));

    aux->cabecera = NULL;
    aux->cola = NULL;

    return aux;
}
Pila * newPila(){

    Pila * aux = NULL;
    aux = malloc (sizeof (Pila));

    aux->arriba = NULL;

    return aux;
}

void encolar (Cola * cola, Nodo * nodo){
    if (cola->cabecera == NULL){
        cola->cabecera = nodo;
        cola->cola = nodo;
    }
    else{
        cola->cola->sig = nodo;
        cola->cola = nodo;
    }

}
Nodo * desencolar (Cola * cola){
    if (cola->cabecera == NULL){
        printf ("Cola vacia, no se puede desencolar.");
        exit (-1);
    }
    else{
       Nodo * nodosaliente = cola->cabecera;

       if (cola->cabecera == cola->cola) {//hay un solo elemento

            cola->cabecera = NULL;
            cola->cola = NULL;
    }
       else{
       cola-> cabecera = cola->cabecera->sig;
       }
       nodosaliente->sig = NULL;
       return nodosaliente;
    }
}


void apilar (Pila * pila, Nodo * nodosaliente){

    if (pila->arriba == NULL){
        pila->arriba = nodosaliente;
    }
    else{
        nodosaliente->sig = pila->arriba;
        pila->arriba = nodosaliente;
    }
}
Nodo * desapilar (Pila * pila){

    if (pila->arriba == NULL){
        printf("La pila esta vacia, no se puede desapilar.");
        exit(-1);
    }

    Nodo * nodosaliente = pila->arriba;
    pila->arriba = pila->arriba->sig;
    nodosaliente->sig = NULL;

    return nodosaliente;
}

void imprimirCola (Cola * cola){

    Nodo * aux = cola->cabecera;
    if (aux == NULL){
        printf ("Cola vacia.");
        exit (-1);
    }
    while(aux != NULL) {
        printf("\t%d\t", aux->dato);
        aux = aux->sig;
    }

}
void imprimirPila (Pila * pila){
    Nodo * aux = pila->arriba;
    if (aux == NULL){
        printf ("Pila vacia.");
        exit (-1);
    }
    while(aux != NULL) {
        printf("\t%d\n", aux->dato);
        aux = aux->sig;
    }
}