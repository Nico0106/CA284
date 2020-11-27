#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = 1;
  int size = 0;
  for (n = 1; n < argc; n ++){
    size = size + 1;
  }

  int array[size];
  int i = 0;
  for (i = 0; i <= size; i ++){
    array[i] = atoi(argv[i + 1]);
  }

  i = 0;
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
