#include <stdio.h> 
int main()  {
    int array1[5]={1,2,3,4,5};
    int array2[5]={6,7,8,9,10};
    int array3[5];

    for(int i=0;i<5;i++) {
         array3[i]=array1[i]+array2[i];



    }
    printf("the elements of the three arrays are : ");
    for(int i=0;i<5;i++)  {

        printf("%d " , array3[i]);
    }




 






    return 0;
}