/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//function main begins program execution.
int main() 
{
  //variable declaration.
  int n, x, total=0;

  printf("enter the n : ");
  scanf("%d",&n);

  for(x=1; x<=n; x++)
    {
      total += x;
    }
  printf("total = %d",total);
  return 0;
}//end of the main function.