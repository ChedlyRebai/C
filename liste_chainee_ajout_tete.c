#include<stdio.h>
#include<stdlib.h>
struct cellule{
int info;
struct cellule * suivant;
};
typedef struct cellule* Liste;

Liste ajouttete(Liste L,int e)
{
struct cellule *p=malloc(sizeof(struct cellule));
p->info=e;
p->suivant=L;
L=p;
return L;
}