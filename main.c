#include <stdio.h>

int main(void) {
int fixedSalary, salePrice, bonus1, bonus2, finalSalary;
  
  printf("Enter your fixed salary: USD$ ");
    scanf("%d",&fixedSalary);
  printf("Enter the total sales amount: USD$ ");
    scanf("%d",&salePrice);
  
  if (salePrice <= 1500){
    bonus1 = salePrice * 0.03;
    finalSalary = fixedSalary + bonus1;
  printf("Total salary = USD$ %d", finalSalary);
}  
  else{  
    bonus1 = 1500 * 0.03;  
    bonus2 = (salePrice - 1500) * 0.05;
    finalSalary = fixedSalary + bonus1 + bonus2;
  printf("Total salary = USD$ %d",finalSalary);
}  
  return 0;
}
