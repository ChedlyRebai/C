#include <stdio.h>
#include <stdlib.h>
typedef struct cellule{
int inf;
struct cellule *suiv;
}cell;
typedef cell *liste;

int somme(liste l){
    int s=0;
    liste p;
    p=l;
    while(p != NULL){
        s= s+p->inf;
        p=p->suiv;
    }return s;
}