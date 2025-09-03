#include <stdio.h> 
int main()  {
int note;

  printf("enter your note : ");
  scanf("%d" ,&note);

  if (note<10)
  printf("Échec (Recalé)");
  else if (note>=10 && note<12)
  printf("Passable");
  else if (note>=12 && note<14)
  printf("Assez Bien");
  else if(note>=14 && note<16)
  printf(" Bien");
  else if (note>=16)
  printf("tres bien");











    return 0;
}