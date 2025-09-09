#include <stdio.h>

int main() {
    
int size, i, replacing, replacement;

 printf(" enter the size of the array : ");
 scanf("%d", &size);

int array[100];

 printf("emlements of the array :\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

 printf("the replacing value : ");
 scanf("%d", &replacing);

 printf("the new value : ");
 scanf("%d", &replacement);
     for(i = 0; i < size; i++) {
        if(array[i] == replacing) {
            array[i] = replacement;
        }
    }

    printf("the modefied array is :\n");
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}