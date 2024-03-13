#include<stdio.h>
void main()
{
  int a = 10, b = 20, c;
  printf("Number before swap");
  printf("a = %d and b = %d ", a, b);
  c = a;
  a = b;
  b = c;

  printf("Numbers after swap")
  printf("a = %d and b = %d ", a, b);
}
