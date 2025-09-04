#include <stdio.h> 
int main()  {
    int line;
    int space=1;



    printf("Enter the number of lines you want : ");
    scanf("%d" , &line);

   for (int i=line  ;i>= 1 ;i--) {

     for (int j=i;j>=1; j--) {

        printf(" ");
     }

   for (int j=1 ; j<= space ; j++){

       printf("*");
    }
    space +=2;
   printf("\n");







   }







 






    return 0;
}