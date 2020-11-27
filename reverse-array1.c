#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int size = 5;
  int array[size];
  array[0] = atoi(argv[1]);
  array[1] = atoi(argv[2]);
  array[2] = atoi(argv[3]);
  array[3] = atoi(argv[4]);
  array[4] = atoi(argv[5]);

  int i = 0;
  int tmp = 0;
  int j = size - 1;
  for (i = 0; i < size / 2; i ++){
    tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
    j = j - 1;
  }

  for (i = 0; i < size; i ++){
    printf("%d\n", array[i]);
  }
  return 0;
}
