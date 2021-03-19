#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int convert(long long n, int *dec);

int main(int argc, char *argv[])
{
  // if the string is split
  if (argc > 2){
    //getting the size
    int n = 1;
    int invalid = 0;
    int size = 0;
    for (n = 1; n < argc; n ++){
      size = size + 1;
    }
    if (size > 8){
      printf("Too many binary digits entered.\n");
    }
    else{
      //Adding numbers to array
      char *array[size + 1];
      int i;
      for (i = 0; i < argc; i++){
        array[i] = argv[i + 1];
      }
      for (i = 0; i < size; i++){
        if ((atoi(array[i]) != 1 && atoi(array[i]) != 0) || isdigit(*array[i]) == 0){
          invalid = 1;
          break;
        }
      }

      if (invalid == 1){
        printf("Only digits 1 and 0 are permitted.\n");
      }
      else{
        //concatenating numbers
        int i;
        for (i = 1; i < size; i++){
          strcat(array[0], array[i]);
        }
        int number = atoi(array[0]);
        int dec;
        convert(number, &dec);
        printf("%d\n", dec);

      }
    }
  }
  else if(argc == 2){
    int dec;
    convert(atoi(argv[1]), &dec);
    printf("%d\n", dec);
  }
  return 0;
}


int convert(long long n, int *dec) {
  int i = 0, rem;
  *dec = 0;
  while (n != 0) {
    rem = n % 10;
    n /= 10;
    *dec += rem * pow(2, i);
    ++i;
  }
}
