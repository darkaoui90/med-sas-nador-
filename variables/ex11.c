#include <stdio.h> 
int main()  {
    int longeur;
    int largeur;
    int surface;

    printf("entrer la longeur  : ");
    scanf("%d" , &longeur);

    printf("entrer la largeur : ");
    scanf("%d" , &largeur);

    surface= longeur * largeur;
    

    printf("la surface d’un rectangle est : %d " , surface);













    return 0;
}