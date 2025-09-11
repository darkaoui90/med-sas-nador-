#include <stdio.h> 

struct personne{
     char nom[20] , prenom[20];
     int age;

};
int main()  {

    struct personne x ;
    printf("entrez ton nom personelle : ");
    scanf("%s" , x.nom);
    printf("enter ton prenom  : ");
    scanf("%s" , x.prenom);

    printf("entrer ton age : ");
    scanf("%d" , &x.age);

    printf("\n");

    printf("les informations de personne :  \n");
    printf("nom :  %s\n" , x.nom);
    printf("prenom : %s\n" , x.prenom);
    printf("age : %d\n" ,x.age );





 






    return 0;
}