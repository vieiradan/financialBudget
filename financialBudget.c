#include <stdio.h>
int main(){

  float salary, expenses;

  printf("Enter your salary this month: ");
  scanf("%f", &salary);

  printf("\nEnter your expenses this month: ");
  scanf("%f", &expenses);

  if(salary>expenses) {printf("\nExpenses inside the expected budget");
  } else if(salary==expenses) {printf("\n\033[1mAttention!\033[0m"), printf("\nExpenses within budget for little!");}
    
  else {printf("\n\033[1mCaution!\033[0m"), printf("\nBudget exceeded");}

  printf("\nIncome: %.2f - Expenses %.2f\nTotal left = %.2f", salary, expenses, salary-expenses);

  printf("\n\nI LOVE FINANCESSSSSSSSSSSSSS, I LOVE YOU JESUSSSSSSSSS!");
}
