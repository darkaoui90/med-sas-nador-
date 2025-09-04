#include <stdio.h> 
int main()  {

    int number;
    int i, result=1;

    printf("Enter a number : ");
    scanf("%d" , &number);

    while(number>0) {
     result=number%10;
     printf("%d" , result);
     number=number/10;



    }





 






    return 0;
}