#include<stdio.h>
#include<stdlib.h>
#include "list.h"

int main(){
    list *l;
    l=create_list();
    add_init(l,3);
    add_init(l,4);
     print_list(l);
    add(l,5,2);
    add(l,7,3);
     print_list(l);
    return 0;
}