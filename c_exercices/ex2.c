#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100]="Le chat noir dort. Le chien joue!";
    char new[100];
    int length=strlen(sentence);
    int j=0;
    for(int i=0  ;i<length ;i++) {
        if(sentence[i]!='!' && sentence[i]!='.'){
        new[j]=sentence[i];

    
       j++;
        }

    }
    printf("the final sentence is %s\n" , new);
    

    

 












    return 0;
}