#include <stdio.h> 
int main()  {
   int exist_array[8]={1,2,3,4,5,6,7,8};
   int new_array[8];

   for(int i=0;i<8;i++) {
        new_array[i]=exist_array[i];



   }
   printf("The exist array elements are : ");
   for(int i=0;i<8;i++) {
    printf("%d " ,exist_array[i]);
   }
   printf("\n");
   printf("The new array elements are : ");
    for(int i=0;i<8;i++) {
    printf("%d " ,new_array[i]);
   }






 






    return 0;
}