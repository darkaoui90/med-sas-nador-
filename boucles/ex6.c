#include <stdio.h>

int main() {
    int number;

    printf("enter the number of even numbers you want : ");
    scanf("%d" ,&number);

    for(int i=2; i<=number;i+=2){

            printf("%d\n" , i );


    }


    return 0;

}