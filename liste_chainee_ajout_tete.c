#include<stdio.h>
#include<stdlib.h>
struct cellule{
int info;
struct cellule * suivant;
};
typedef struct cellule* Liste;

void initialisation_liste_chainee_c(Liste *l){
    *l=NULL;
}

void main(){
    Liste l;
    initialisation_liste_chainee_c(&l);

}