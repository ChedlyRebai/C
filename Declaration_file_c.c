
typedef struct cellule
{ 
    int info;
    struct cellule *prec;
    struct cellule *suivant;
}cellule;

typedef cellule *file;