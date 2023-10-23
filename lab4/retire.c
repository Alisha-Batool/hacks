
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
  float agi,numChildren,childCredit,tax,totalTax;
  char c = 'N';

 printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c =getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }
   if (agi <= 20000) {
    tax = agi * 0.1;
  } else if (agi <= 50000) {
    tax = 2000 + (agi - 20000) * 0.15;
  } else if (agi <= 100000) {
    tax = 7000 + (agi - 50000) * 0.2;
  } else {
    tax = 17000 + (agi - 100000) * 0.25;
  }

  // Compute the child credit based on the number of children
  childCredit = numChildren * 1000;

  // Compute the total tax
  totalTax = tax - childCredit;
  

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}

