
#include <stdio.h>

int main() {
    int old_array[6]={ 1 , 2 , 3 , 4 , 5 ,6 };
    int new_array[6];
    int number;
    
    printf("Enter the number of multiplication : ");
    scanf("%d" , &number);
    
    for(int i=0;i<6;i++) {
        new_array[i]=old_array[i]*number;
    }
    printf("The elements of the new array are : ");
    for(int i=0;i<6;i++) {
       printf("%d " ,new_array[i]);
    }
    return 0;
}