#include <stdio.h> 
int main()  {

    int temperature;

    printf("Enter the temperature degree : ");
    scanf("%d" , &temperature);

    if (temperature<0)
    printf("solide : (glace)");
    else if (temperature>=0 && temperature<100)
    printf("liquide : (l'eau)");
    else if (temperature>=100)
    printf("gas :(vapeur)");












    return 0;
}