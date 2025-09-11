#include <stdio.h>
#define PI 3.14159

struct Cercle {
float rayon;
};


void calculerAire(struct Cercle c) {
float aire = PI * c.rayon * c.rayon;
printf("L'aire du cercle est : %.2f\n", aire);
}

int main() {
struct Cercle A;


printf("Donnez le rayon du cercle: ");
scanf("%f", &A.rayon);


calculerAire(A);

return 0;
}