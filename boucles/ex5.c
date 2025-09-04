#include <stdio.h>

int main() {
    int number;
    int power;
    int result=1;

    printf("Enter a number : ");
    scanf("%d" ,&number);

    printf("enter the power of the number : ");
    scanf("%d" ,&power);
    if (power==0){
         printf("the result of %d pow %d is 1" , number ,power ,result );
    }
    else {
    for (int i=1; i<=power; i++) {
        result*=number;

    }
    }

    printf("the result of %d pow %d is %d" , number ,power ,result );







    return 0;
}