#include <stdio.h>

/**
 * I will be going over Switch Statements (as it is bad practice to do too many else if blocks)
 */

int main()
{
  char grade;

  printf("\nEnter a letter grade");
  scanf("%c", &grade);

  switch(grade)
    {
    case 'A':
      printf("perfect!\n");
      break;
    case 'B':
      printf("You did good\n");
      break;
    case 'C':
      printf("You did average\n");
      break;
    case 'D':
      printf("Atleast its not an F\n");
      break;
    case 'F':
      printf("You failed!!\n");
      break;
    default:
      printf("Please enter only valid grades\n");
    }
      return 0;
    }
