#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()  {

    srand(time(NULL));
    int randomnum =(rand() % 7 ) +1;
   
    switch (randomnum)
    {
    case 1:
       printf("monday");
        break;
    case 2:
       printf("tuesday");
       break;
    case 3:
       printf("wensday");
       break;
    case 4:
    printf("thursday");
    break;
    case 5:
    printf("friday");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
    printf("sunday");
    break;

    
    
    }















    return 0;
}