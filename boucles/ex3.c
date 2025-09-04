#include <stdio.h> 
int main()  {
    int number;
    int somme=0;

    printf("enter a number : ");
    scanf("%d" , &number);

    for(int i=0;i<=number;i++) {
    somme+=i;
    }

    printf("the sum of numbers is %d" , somme);













    return 0;
}