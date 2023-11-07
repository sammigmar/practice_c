#include <stdio.h>
#include <stdbool.h>
/**
 * There are 3 types of logical operators
 * Today I will be going over the && logical operator
 */

int main()
{
  float temp = 25.89;
  bool sunny = true;
  if(temp >= 10 && temp <= 30 && sunny == true)
    /**
     * sunny == true
     * sunny == 1
     * sunny
     * note: I can use either of the above 3 examples
     */
    {
      printf("\nThe weather is good!");
    }
  else
    {
      printf("The weather is bad!");
    }
  return 0;
}
