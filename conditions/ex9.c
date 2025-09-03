#include <stdio.h> 
int main()  {
    char lettre;

    printf("enter a letter");
    scanf("%c" , &lettre);

    if (lettre>=65 && lettre<=90)
    printf("majuscule lettre : ");
    else if (lettre>=97 && lettre <=122)
    printf("muniscule lettre : ");
    else 
    printf("it is not a letter");














    return 0;
}