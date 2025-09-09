#include <stdio.h> 
int main()  {

    int array[5]={1,2,3,4,5};
    int total=0 , meduim;

    for(int i=0;i<5;i++) {
        total+=array[i];
    }
    meduim=total/5;

    printf("the meduim value of the array is %d" , meduim);







 






    return 0;
}