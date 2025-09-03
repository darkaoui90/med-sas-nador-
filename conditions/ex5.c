#include <stdio.h> 
int main()  {
    int year;
    int choice;

    printf("This is a c program to change a year to whatever you want in the options : \n");
    printf("options:\n");
    printf("1. months \n");
    printf("2. days \n");
    printf("3.hours\n");
    printf("4.minutess \n");
    printf("5. seconds \n");
    printf("enter year you wanna transform\n");
    scanf("%d" , &year);
    printf("enter your choice ");
    scanf("%d" , &choice);

    if (choice==1)
    printf("%d months" , year*12);
    else if (choice==2)
    printf("%d days" , year*365);
    else if (choice==3)
    printf("%d hours" , year*365*24);
    else if (choice==4)
    printf("%d minutes" ,year*365*24*60 );
    else if (choice==5)
    printf("%d seconds" ,year*365*24*60*60 );












    return 0;
}