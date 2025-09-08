
#include <stdio.h>

int main() {
    int number;
    int total=1;
    
    printf("Enter a number : ");
    scanf("%d" , &number);
    
    for(int i=1; i<=number; i++) {
        
        total*=i;
        
        if (number==0) {
            total=1;
        }
        
    }
    printf("the total of numbers multiplication is %d" , total);

    return 0;
}