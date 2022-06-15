#include<stdio.h>
#include<stdlib.h>
struct cellule{
int info;
struct cellule * suivant;
};
typedef struct cellule* Liste;

Liste creer()
{
int e;
int rep;
Liste L=NULL;
do
{
printf(" \nDonner un élément ");
printf(" \nDonner un élément ");
scanf("%i",&e);
L=ajouttete(L, e); // ou aussi Ajout_queue (L, e)
printf (" \nVoulez-vous continuer 0/1 ");
scanf("%i", &rep);
}
while(rep !=0);
return L;
}