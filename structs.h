#ifndef _STRUCTS_H_
#define _STRUCTS_H_

#define MAX_ARR 300
typedef struct s {
    int elemento;
    int siguiente;
} nodo;

typedef struct t {
    nodo arreglo[MAX_ARR];
    int cabeza;
    int fin;
} lista;


#endif
