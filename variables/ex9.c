#include <stdio.h> 
#include <math.h>
int main()  {

    float  x1,y1,z1;
    float x2,y2,z2;
    float moyenne;

    printf ("enter the variables x1 , y1 , z1 of the space");
    scanf("%f%f%f" , &x1 ,&y1 ,&z1);

    printf("enter the variables x2 , y2 , z2 of the space");
    scanf("%f%f%f" , &x2 ,&y2 ,&z2);

    moyenne=sqrt(pow(x2-x1 ,2.0) + pow(y2-y1 , 2.0) + pow(z1-z2,2.0));

    printf("the auclidiene distance between two points in a 3d space is : %.2f" , moyenne);

















    return 0;
}

