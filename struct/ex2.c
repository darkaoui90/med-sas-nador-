#include <stdio.h> 
struct student{
    char fname[40];
    char lname[40];
    int notes[4];



};
int main()  {

    struct student x;
    printf("Enter the first name : ");
    scanf("%s" ,x.fname);

    printf("Enter the last name : ");
    scanf("%s" , x.lname);

    for(int i=0;i<4; i++) {
        printf("Enter the note %d : " , i+1);
        scanf("%d" , &x.notes[i]);
    }
    printf("student infos :   \n");
    printf("fitst name : %s\n" , x.fname);
    printf("last name : %s\n" , x.lname);
    for (int i=0;i<4;i++)  {
         
        printf("note %d : %d " , i+1 , x.notes[i]);



    }








 






    return 0;
}