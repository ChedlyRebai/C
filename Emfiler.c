
#include<stdlib.h> //pour utiliser la fonctions malloc

file emfiler(file f,int e)
{
    file ft,p;  
    ft=(file)malloc(sizeof(cellule));
    ft->info=e;
    ft->suivant=NULL;
    if(f==NULL)
    {
        f=ft;
    }else
    {
    p=f;
    while(p->suivant!=NULL){
        p=p->suivant;
    }
    p->suivant=ft;
    }
    return f;
}
 