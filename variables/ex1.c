#include <stdio.h>

int main() {
      char fname[20];
      char lname[30];
      int age;
      char sexe[20];
      char email[40];


printf("enter your first name : ");
scanf("%s" , fname);

printf("enter your last name  : ");
scanf("%s" ,  lname);

printf("enter your age : ");
scanf("%d" , &age );

printf("enter your sexe (male or a female )");
scanf("%s" ,sexe);

printf("enter your personal email : ");
scanf("%s" , email);

printf("first name : %s\n" , fname);
printf("last name : %s\n" , lname);
printf("Age : %d\n" , age);
printf("sexe : %s\n" , sexe);
printf("personal email : %s" , email);







    return 0;
}