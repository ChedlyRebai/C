#include<stdio.h>
#include<stdlib.h>
struct cellule{
int info;
struct cellule * suivant;
};
typedef struct cellule* Liste;

Liste ajoutqueue(Liste L,int e)
{
Liste pt,p;
p=malloc(sizeof(struct cellule));
p->info=e;
p->suivant=NULL;
if(L == NULL){
    L=p;
    free(p);
}else{
    pt=L;
while(pt->suivant!=NULL){
    pt=pt->suivant;
}
pt->suivant = p;
}
return L;
}
