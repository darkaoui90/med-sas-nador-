
#include <stdio.h>

int main() {
    int base;
    int power;
    int result=1;
    
    printf("Enter the base of a number  :  ");
    scanf("%d" , &base);
    
    printf("Enter the power of a number : ");
    scanf("%d"  , &power);
    
    for(int i=1;i<=power;i++) {
        if (power==0 && base !=0) {
            
            result=1;
            break;
            
        }
        else if (base==0) {
            result=0;
            break;
        }
        result*=base;
        
    }
    printf("the final  result is %d" , result );
    return 0;
}