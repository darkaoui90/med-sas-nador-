#include <stdio.h> 
int main()  {
    int num1,num2;

    printf("enter two numbers : ");
    scanf("%d%d" ,&num1 ,&num2);

    if (num1!=num2)
    printf("result =%d" , num1+num2);
    else if (num1==num2)
    printf("result = %d" , (num1+num2)*3);











    return 0;
}