#include <stdio.h>

int main() {
    int num;
    int a,b,c,d;
    // Write C code here
    printf("Enter a number with four digits : ");
    scanf("%d" , &num);

      a=num%10;
      printf("%d" , a);
      num= num/10;
      b=num%10;
      printf("%d" , b);
      num=num/10;
      c=num%10;
      printf("%d" , c);
      num=num/10;
      d=num%10;
      printf("%d" , d);


    return 0;
}