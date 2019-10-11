//program that dispays the discount,Amount payable and cost of the products
#include <stdio.h>
int main() {
  int Quantity;
  float discount,Uprice,Cost,Amount;
  const float perc=(0.1);

  printf("Enter the Quantity \n");
  scanf("%d", &Quantity);

  printf("Enter the Unit Price : \n");
  scanf("%f",&Uprice);

  printf("Uprice is %.2f\n",Uprice );
  printf("Quantity is %.2f\n",Quantity );

  Cost =Uprice * Quantity;
  printf("Cost is %.2f\n",Cost);

  discount=Cost * perc;
  printf("Discount is %.2f\n",discount);

  Amount = Cost - discount;
  printf("Amount payable is %.2f\n",Amount);

  return 0;
}
