#include <stdio.h> 
int main()  {
    int h1,h2;
    int m1,m2;
    int s1,s2;

    printf("enter the hours| minutes | secondes of the first instant");
    scanf("%d:%d:%d" , &h1 ,&m1 ,&s1);

    printf("enter the hours| minutes | secondes of the second instant");
    scanf("%d:%d:%d" , &h2 ,&m2 ,&s2);

    if (h1>h2)
    printf("the first instant proceeds the second ");
     else if (h2>h1) 
    printf("the second instant proceeds the first");
    else {
         if (m1>m2)
    printf("the first instant proceeds the second ");
     else if (m2>m1) 
    printf("the second instant proceeds the first");
else {
     if (s1>s2)
    printf("the first instant proceeds the second ");
     else if (s2>s1) 
    printf("the second instant proceeds the first");

    
}






    }
    













    return 0;
}