#include<stdio.h>
#include<stdlib.h>
struct cellule{
int info;
struct cellule * suivant;
};
typedef struct cellule* Liste;

void initialisation_liste_chainee_c_procedure(Liste *l){  //procedure
    *l=NULL;
}

Liste initialisation_liste_chainee_c_fonctions(Liste L){ //fonctions
    return L=NULL;
}

void main(){
    Liste L1,L2;
    initialisation_liste_chainee_c_procedure(&L1);
    L2=initialisation_liste_chainee_c_fonctions(L2);


}