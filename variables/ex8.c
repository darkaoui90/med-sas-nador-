#include <stdio.h> 
#include <math.h>

int main()  {

    float num1,num2,num3;
    float moyenne;
    float somme;


    printf("Enter three numbers : ");
    scanf("%f%f%f" , &num1 ,&num2 ,&num3);

    somme= (num1 * num2 * num3) ;
    moyenne= pow (somme , 1.0/3.0);


    printf("moyenne est : %0.2f" , moyenne);













    return 0;
}