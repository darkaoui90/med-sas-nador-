#include <stdio.h> 
int main()  {
 int array[5]={1 , 2 , 3 , 4 , 5};
 int number;
 int finding=0;

   printf("Enter the number you are looking for : ");
   scanf("%d" , &number);

   for(int i=0;i<5;i++) {
    if (number==array[i]) {
        printf("%d exists in the array " , number);
        finding=1;
    }
    




   }

   if (finding==0){
        printf("%d  not exists in the array " , number);
   }
   






 






    return 0;
}