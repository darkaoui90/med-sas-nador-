#include <stdio.h>
#include <string.h>

char string[100]="hello everyone how are you doing today";
char small[50]="how";

int main() {
    
    if (strstr(string, small) != NULL)
    printf("small string is exists\n");
else
    printf("small string doesnt exists \n");


    return 0;
}