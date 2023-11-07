#include <stdio.h>

/**
 * I will be going over user input which is the invert of printf, hence scanf
 */

int main()
{
  int age;
  printf("What is your age?\n");
  scanf("%d", &age);
  printf("\nYour age is %d\n", age);
  return 0;
}
