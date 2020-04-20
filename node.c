#include "node.h"
#include<stdio.h>
#include <stdlib.h>

node *create_node(DATA data){
    node *t;
    t = (node*)malloc(sizeof(node));
    t-> next= NULL;
    t->data= data;
}

void delete_node(node *n){
    if(n->next==NULL){
        free(n);
        n=NULL;
    }
}