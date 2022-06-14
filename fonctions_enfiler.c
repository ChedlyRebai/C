
#include<stdlib.h> //pour utiliser la fonctions malloc

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
 