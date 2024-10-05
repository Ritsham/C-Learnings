#include <stdio.h>
int main()
{
  int x,y,product=1;
  printf("Enter the value of x: ");
  scanf("%d",&x);
  printf("Enter the value of y: ");
  scanf("%d",&y);
  for (int i = 1; i <= y; i++)
  {
    product=product*x;
      }
  printf("the value of x^y is %d",product);
    return 0;
}