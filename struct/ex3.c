#include <stdio.h> 
struct rectangle {
    int longeur;
    int largeur;
    int surface;

};
int calcul(struct rectangle r) {
 return r.longeur*r.largeur;
}
int main()  {

    struct rectangle r;

    r.longeur=5;
    r.largeur=4;

r.surface=calcul(r);

printf("surface of retangle is :  %d", r.surface );








 






    return 0;
}   