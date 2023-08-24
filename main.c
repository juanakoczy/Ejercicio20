#include <stdio.h>
#include "PILAS Y COLAS.h"

int main() {
    Cola * cola = newCola();
    Pila * pila = newPila ();

    encolar(cola, newNodo(1));
    encolar(cola, newNodo(2));
    encolar(cola, newNodo(3));

    imprimirCola(cola);
    printf("\n");

    while (cola->cabecera != NULL) {
        Nodo * nodosaliente = desencolar(cola);
        apilar(pila, nodosaliente);
    }

    printf("\n");
    imprimirPila(pila);

    while (pila->arriba != NULL) {
        Nodo * nodosaliente = desapilar(pila);
       encolar (cola, nodosaliente);
    }

    printf("\n");
    imprimirCola(cola);


    return 0;
}
