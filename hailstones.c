#include <stdio.h>
#include <stdlib.h>

void hailstones(int n);

int main(int argc, char *argv[1])
{
  int n;
  n = atoi(argv[1]);
  hailstones(n);

  return (0);
}

void hailstones(int n){
  while (n != 1){
    if (n % 2 == 0){
      n = n / 2;
      printf("%d\n", n);
    }
    else {
      n = (n * 3) + 1;
      printf("%d\n", n);
    }
  }
}
