void affiche(file f){
    file ft;
    ft=f;
    while(ft!=NULL){
        printf("%d\n",ft->info);
        ft=ft->suivant;
    }
}