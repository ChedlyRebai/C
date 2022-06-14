#include<stdlib.h>

file defiler(file f,int *e){
file ft;
ft=f;
*e=f->info;
f=f->suivant;
free(ft);
return f;
}