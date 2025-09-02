#include <stdio.h> 
int main()  {

 int num1,num2,num3;
 float moyenne;

 printf("Enter three numbers : ");
 scanf("%d%d%d" , &num1 ,&num2 , &num3);

 moyenne=(float) (num1*2 + num2 * 3 + num3*5) / (2+3+5);

 printf("le moyenne de les trois nomberes est : %0.2f" , moyenne);











    return 0;
}