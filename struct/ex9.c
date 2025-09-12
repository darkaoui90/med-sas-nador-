#include <stdio.h> 
#include <string.h>
 struct account {
    char name[50];
    float solde;

};
struct account update (struct account client1 , double adding ) {
    
  if (adding > 0) {
        client1.solde = client1.solde + adding;
  }
   else {
    printf("no amount to add ");
   }

   return client1;
     

}



int main()  {
    struct account client;
    strcpy(client.name , "mohammed");
    client.solde=1500.00;
    
    printf("your blance before : %.2fDH \n" , client.solde);
  client=update (client, 500.00);
    printf("your current balance : %.2fDH" , client.solde);



   




 






    return 0;
}