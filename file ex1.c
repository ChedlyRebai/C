#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct cellule
{ 
    int info;
    struct cellule *suivant;
}cell;
typedef cell* file;
typedef struct{
    cell *t;
    cell *q;
}pfile;

typedef cellule *file;
file initial(){
    return NULL;
}


int filevide(file f){
    if(f.t==NULL){
        return (1);
    }
    else{return (0);}
}

file initfile(file *f){
    file f;
    f.t=NULL;
    f.q=NULL;
    return f;
    }

file empfiler(file f,int e){
    pfile p;
    p=(file)malloc(sizeof(cell));
    p->info=e;
    p->suiv=NULL;
    if(f->t==NULL){
        f->t=p;
        f->q=p;
    }else{
        f->q->suiv=p;
        f->q=p;
    }
}
 


file defiler(file f,int *e){
file ft;
ft=f;
*e=f->info;
f=f->suivant;
free(ft);

return f;
}



void affiche(file f){
    file ft;
    ft=f;
    while(ft!=NULL){
        printf("%d\n",ft->info);
        ft=ft->suivant;
        
    }
}

int main(){
    file f;
    int e;
    f=initial();
    for(int i=1;i<=5;i++){
        f=emfiler(f,i);
    }
    f=defiler(f,&e);
    affiche(f);
    return 0;
}