#include <stdio.h> 
int main()  {
    int number;
    int facto=1;
    

    printf("enter a number : ");
    scanf("%d" ,&number);
    if (number==0)
       printf("la factorielle de 0 est : 1");
     else if (number!=0) {
        for (int i=1; i<=number; i++){
       
        {
           facto*= i;
        }


     }

    

    
        
    
    }
     printf("la factorielle de %d est : %d" , number , facto);












    return 0;
}