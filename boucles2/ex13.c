#include <stdio.h>
#include <math.h>

int main() {
       
  int number;
  int sum=0;
 
  
  printf("Enter a number : ");
  scanf("%d" , &number);
  
  for (int i=1 ; i<=10 ; i++) {
      printf("%d * %d = %d\n" , number , i , number*i);
      sum+=number*i;
      
      
      
      
      
      
      
      
  }
  
  printf("the total sum is : %d" , sum);
    
    
        
        
            
        
        
       
       
        
    

    return 0;
}