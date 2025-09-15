#include <stdio.h>
#include <string.h>
#include <ctype.h>
char lowercase[80]="Bonjour Le monde";
int a=40;

void transformation(char lowercase[],int a ) {
for(int i=0;i<a;i++) {
   if(lowercase[i]>=65 &&lowercase[i]<=90)
    lowercase[i]=lowercase[i]+32;
}
printf("the sentence in loweercase is : %s " , lowercase);


};



int main () {
    transformation(lowercase ,a);
    



 return 0;
}