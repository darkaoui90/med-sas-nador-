#include <stdio.h> 

struct products {
    char name[60];
    float price ;
    int quantity;
    
};
int main()  {
    int number;
    printf("Enter the number of products : ");
    scanf("%d" , &number);
    struct products new[number];

    for(int i=0;i<number; i++){
        printf("Enter the name of the product %d: ", i+1);
        scanf("%s" , new[i].name);
        
        printf("Enter the price of the product %d", i+1);
        scanf("%f" , &new[i].price );

        printf("enter the quantity of the product %d" , i+1);
        scanf("%d" ,&new[i].quantity );







    }
    printf("list of products are : \n");

    for(int i=0;i<number;i++) {
       printf("Product %d : \n" , i+1);
       printf("name : %s \n" , new[i].name );
       printf("price : %.2f \n" , new[i].price );
       printf("quantity : %d \n" , new[i].quantity );





    }
  
    
    





 






    return 0;
}