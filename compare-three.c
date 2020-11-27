#include <stdio.h>
#include <stdlib.h>

int maximum(int first, int second, int third, int *max);

int main(int argc, char *argv[])
{
  int first, second, third, max;
  first = atoi(argv[1]);
  second = atoi(argv[2]);
  third = atoi(argv[3]);

  if (first == second){
    printf("error: two numbers entered are the same\n");
  }
  else if (first == third){
    printf("error: two numbers entered are the same\n");
  }
  else if (second == third){
    printf("error: two numbers entered are the same\n");
  }
  else{
    maximum(first, second, third, &max);
    printf("%d is the largest number.\n", max);
  }
  return (0); /* exit correctly*/
} /* end program*/

int maximum(int first, int second, int third, int *max)
{
  if (first > second && first > third){
    *max = first;
  }
  else if (second > first && second > third){
    *max = second;
  }
  else if (third > first && third > second){
    *max = third;
  }
}
