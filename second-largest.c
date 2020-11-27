#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = 1;
  int size = 0;
  int flag = 1;

  for (n = 1; n < argc; n ++){
    size = size + 1;
  }

  // adding numbers to array
  int array[size + 1];
  int i = 0;
  for (i = 0; i < size; i ++){
    array[i] = atoi(argv[i + 1]);
  }
  int pointer;
  for(i = 0; i < size; i++){
    pointer = array[i];
    n = i - 1;
    while (n >= 0 && pointer < array[n]){
      array[n + 1] = array[n];
      n = n - 1;
    }
    array[n + 1] = pointer;
  }

  for (i = 0; i < size; i++){
    if (array[i] < 0){
      flag = 0;
    }
  }

  if (size == 0){
    printf("Insufficient arguments provided\n");
  }
  else{
    if (flag == 0){
    printf("Error: only positive integers are permitted.\n");
    }
    else{
    printf("%d\n", array[size - 2]);
    }
  }
  return 0;
}
