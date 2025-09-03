#include <stdio.h> 
int main()  {

    char character;

    printf("Enter a character :  ");
    scanf("%c" , &character);

    switch (character)
    {
        case 'a':
        printf("the character %c is a voyel" , character);
        break;
        case 'o':
        printf("the character %c is a voyel" , character);
        break;
         case 'u':
        printf("the character %c is a voyel" , character);
        break;
         case 'i':
        printf("the character %c is a voyel" , character);
        break;
         case 'e':
        printf("the character %c is a voyel" , character);
        break;
         case 'A':
        printf("the character %c is a voyel" , character);
        break;
         case 'E':
        printf("the character %c is a voyel" , character);
        break;
         case 'O':
        printf("the character %c is a voyel" , character);
        break;
         case 'I':
        printf("the character %c is a voyel" , character);
        break;
         case 'U':
        printf("the character %c is a voyel" , character);
        break;

    
    default:
    printf("character %c is not a voyel" , character);
        break;
    }












    return 0;
}