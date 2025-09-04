#include <stdio.h>


int main() {
    int number;
    int result , i=1;

    printf("enter a number : ");
    scanf("%d" , &number);

      while (number>0) {
        result= number%10;
        printf("%d" , result);
        number=number/10;
        i++;
    }






    return 0;
}