#include <stdio.h> 
int main()  {

    int number;
    int i;
    int num1=0 , num2=1 , num3;

    printf("Enter a number you want to see in the suite");
    scanf("%d" , &number);

    printf(" %d " , num1);
     printf(" %d " ,num2);

    for(i=2 ;i<number ;i++){

       
    num3=num1+num2;
       printf("%d " , num3);

       num1=num2;
       num2=num3;


    






    }













    return 0;
}