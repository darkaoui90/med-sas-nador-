#include <stdio.h> 
int main()  {
    int number;
    int sum=0;

    printf("enter a number to calculate sum till of it ");
    scanf("%d" , &number);

    for(int i=0; i<number; i++) {

  sum+=i;



    }

    printf(" the sum is %d" , sum);














    return 0;
}