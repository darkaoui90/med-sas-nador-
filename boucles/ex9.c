#include <stdio.h>
int main() {
    int number;
    int result , i=1;
    int count=0;

    printf("enter a number : ");
    scanf("%d" , &number);

      while (number>0) {
        result= number%10;
        count++;
        number=number/10;
        i++;
    }


    printf("%d chiffres" , count);





    return 0;
}