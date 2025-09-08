#include <stdio.h>
#include <math.h>

int main() {
    
    int number ,i,j;
    printf("Enter a number : ");
    scanf("%d" ,&number);
    
    
    for ( i=2;i<=number;i++) {
        int primary=1;
        for (j=2;j<=sqrt(i); j++ ){
            
            
            if (i %j==0) {
                primary=0;
                break;
                
            
            }
            
        }
       if(primary) {
           printf("%d" , i);
       }
        
    }

    return 0;
}