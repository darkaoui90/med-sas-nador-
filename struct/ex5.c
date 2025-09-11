#include <stdio.h> 
#include <string.h>


struct book{
  char title[60];
  char author[40];
  int prodyear;



};
struct book addbook(char title[], char author[], int prodyear) {
    struct book book;

    strcpy(book.title , title);
    strcpy(book.author , author);
     book.prodyear=prodyear;

    return book;
}

int main()  {
  struct book mybook=addbook("C Programming" , "Nuha Ali" , 2003);

    printf("Title : %s\n", mybook.title );
    printf("Author : %s\n", mybook.author);
    printf("year : %d\n",  mybook.prodyear);









 






    return 0;
}