#include <stdio.h>

int main() {
    int number;

    printf("enter a number : ");
    scanf("%d" ,&number);

    for(int i=0; i<=number;i++){
        if (i%2!=0) {
            printf("%d\n" , i);

        }
    }


    return 0;
}