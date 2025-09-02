#include <stdio.h> 
int main()  {

   float km;
   float ms;

   printf(" enter the km distance per hour you want to transfer : ");
   scanf("%f" , &km);

   ms = km * 0.27778;

   printf("the distance in meters per seconds is : %.3f" , ms);












    return 0;
}