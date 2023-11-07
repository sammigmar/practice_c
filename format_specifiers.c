#include <stdio.h>

int main()

/**
 * We will be going over format specifiers
 */

{
  int sam = 10;
  float samuel = 10.5;
  char name = 'm';
  char maiden [] = "martin";

  printf("My name is Sam\n I am %d years old\n I will be %f years old in 6 month\n My last initial is %c\n My last initial stands for %s\n", sam, samuel, name, maiden);
  return 0;
}
