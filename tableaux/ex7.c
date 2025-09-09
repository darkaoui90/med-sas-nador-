#include <stdio.h>

int main() {
    int array[] = {5, 0, 9, 2, 3};
    int size = 5;
    int i, j, temp;

 for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - 1 - i; j++) {
         if (array[j] > array[j + 1]) {
             temp = array[j];
             array[j] = array[j + 1];
             array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}