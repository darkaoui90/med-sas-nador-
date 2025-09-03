#include <stdio.h> 
int main()  {
    int year;
    int month;
    int day;

    printf("Enter a date in JJ/MM/AAAA format ");
    scanf("%d/%d/%d" , &day , &month , &year);

    switch(month) {
        case 1:
        printf("%d-%d-%d" , day ,year);
        break;
    }













    return 0;
}

