#include <stdio.h>
#include <stdlib.h>

void leapyear(int first , int second , int x, int i);

int main(int argc, char *argv[])
{
  int first;
  int second;
  int x;
  int i;

  first = atoi(argv[1]);
  second = atoi(argv[2]);
  leapyear(first , second, x, i);
  return 0;
  }

void leapyear(int first , int second , int x, int i){
  x = first;
  for (i = x; i <= second; i++){
    if((first % 4 == 0 && first % 100 != 0) || first % 400 == 0){
      printf("%d\n", first);
      }
       first = first + 1;
    }
  }
