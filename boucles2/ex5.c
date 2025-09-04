#include <stdio.h> 
int main()  {
    int number;
    int sum=0;

    printf("Enter a number : ");
    scanf("%d" , &number);

    for (int i=0;i<=number;i++ ) {

        sum+=i;






    }

     printf("sum of numbers till %d is : %d" , number , sum);




 






    return 0;
}