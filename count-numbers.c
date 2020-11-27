#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
  //getting size of array
  int n = 1;
  int sizeflag = 1;
  int size = 0;
  for (n = 1; n < argc; n ++){
    size = size + 1;
  }

  if (size == 0){
    sizeflag = 0;
  }

  // adding numbers to array
  int array[size + 1];
  int i = 0;
  for (i = 0; i < size; i ++){
    array[i] = atoi(argv[i + 1]);
  }
  char *charray[size + 1];
  for (i = 0; i < argc; i++){
    charray[i] = argv[i + 1];
  }

  //checking valid
  int j, indicator = 1;
  for (j = 0; j < size; j++){
    if (isalpha(array[j]) == 2 || array[j] == 0){
      printf("Error: only numbers are permitted.\n");
      indicator = 0;
      break;
    }
    else{
      if (array[j] < 0){
        printf("Error: Only positive integers are permitted.\n");
        indicator = 0;
        break;
      }
    }
  }
  //counting  even and odd numbers
  int even = 0, odd = 0;
  for (i = 0; i < size; i ++){
    if (array[i] % 2 == 0){
      even ++;
    }
    else{
      odd ++;
    }
  }

  // prime numbers
  int prime = 0;
  n = 0;
  i = 0;
  int pointer = 1;
  for (n = 0; n < size; n++){
    if (array[n] == 1){
      prime = prime - 1;
    }
    pointer = 1;
    for (i = 2; i < array[n]; i++){
      if (array[n] % i == 0){
        pointer = 0;
        break;
      }
    }
    if (pointer == 1){
        prime ++;
    }
  }

  int g = 1;
  for (i = 0; i < size; i++){
    char *p = charray[i];
    while ( *p != '\0' ){
      if (isalpha(*p) != 0){
        g = 0;
      }
      p ++;
    }
  }

  if (g == 0){
    printf("Error: only numbers are permitted.\n");
  }
  else if (g == 1){
    if (sizeflag == 0){
      printf("insufficient command line arguments.\n");
    }
    else{
      if (indicator == 1){
        printf("Number of odd numbers: %d\nNumber of even numbers: %d\nNumber of prime numbers: %d\n", odd, even, prime);
      }
    }
  }
  return 0;
}
