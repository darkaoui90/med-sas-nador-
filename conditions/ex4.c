#include <stdio.h> 
#include <math.h>
int main()  {
    int a,b,c;
    int delta;

    printf("enter the three numbers a then b then c ");
    scanf("%d%d%d" , &a , &b , &c);

    delta=pow(b,2)-4*a*c;


     if(delta>0)
     printf("two real solutions ");
     else if (delta==0)
     printf("one solution");
     else if (delta<0)
     printf("there is no real solution");














    return 0;
}
