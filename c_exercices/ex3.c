#include <stdio.h>
#include <string.h>
int main() {
    char string[]="le chat noir dort le chien joue ";
    char *token;
    int count=0;

    token=strtok(string," ");

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");  
        count++;
    }
    printf("the number of words in the sentence is : %d words" , count);











return 0;
}