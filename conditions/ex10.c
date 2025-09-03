#include <stdio.h> 
int main()  {
    int year;
    int month;
    int day;

    printf("Enter a date in JJ/MM/AAAA format ");
    scanf("%d/%d/%d" , &day , &month , &year);

    switch(month) {
        case 1:
        printf("%d-january-%d" , day ,year);
        break;
        case 2:
        printf("%d-february-%d" , day ,year);
        break;
        case 3:
        printf("%d-march-%d" , day ,year);
        break;
        case 4:
        printf("%d-april-%d" , day ,year);
        break;
        case 5:
        printf("%d-mai-%d" , day ,year);
        break;
        case 6:
        printf("%d-june-%d" , day ,year);
        break;
        case 7:
        printf("%d-july-%d" , day ,year);
        break;
        case 8:
        printf("%d-aout-%d" , day ,year);
        break;
        case 9:
        printf("%d-septembre-%d" , day ,year);
        break;
        case 10:
        printf("%d-october-%d" , day ,year);
        break;
        case 11:
        printf("%d-November-%d" , day ,year);
        break;
        case 12:
        printf("%d-december-%d" , day ,year);
        break;
    }













    return 0;
}

