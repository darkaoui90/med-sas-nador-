#include <stdio.h> 
#include <math.h>
#define  PI 3.14159
int main()  {
 float rayon;

 float volume;

    printf("entrer le rayon :");
    scanf("%f" , &rayon);

    volume=(4.0/3.0) * PI * pow(rayon ,3);


    printf ("le rayon est %0.2f" , volume);

















    return 0;
}