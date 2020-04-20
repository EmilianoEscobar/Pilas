#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <stdbool.h>

typedef struct _list list;

struct _list{
    node *head;
    int num;//contador que nos dice el numero de elemntos
};

list* create_list();
void delete_list(list *l);

//funciones para agregar a la lista
bool add_init(list *l, DATA data);//agergar al inicio
bool add_end(list *l, DATA data);//agregar al final
bool add(list *l, DATA data, int pos);//agregar por posicion

//funcion  para eliminar un dato
bool remove_data(list *l, DATA data);//eliminar por posicion y nos regresa si elimino el dato

//funciones para eliminar por posicion 
DATA delete_init(list *l);
DATA delete_end(list *l);
DATA delete_data(list *l, int pos);

//funcion para buscar en lista
int search_data(list *l, DATA data);//regresa pos
DATA search_pos(list *l, int pos);//regresa dato

node *search_node(list *l, DATA data);//regresa un nodo donde se encuentra el node
node *ultimo (list *l);
node *penultimo(list *l);
node *actual(list *l, int pos);
node *anterior(list *l, int pos);

//imprimir lista
void print_list(list *l);
bool is_empty(list *l);
void empty(list *l);



#endif


