#include <stdio.h>

int main() {
    int decimal ,binary,i=0;
    
    printf("Enter a decimal number : ");
    scanf("%d" , &decimal);

    printf(" %d in hexadecimal is %x\n" , decimal ,decimal);

    while (decimal>0) {
        binary= decimal%2;
        printf("%d" , binary);
        decimal=decimal/2;
        i++;
    }












    return 0;
}