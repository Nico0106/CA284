#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[100], substring[100];
  int first = 0;
  int second = 0;
  int i;
  int n;
  int indicator;
  int flag = 1;
  int g = 1;

  printf("Enter the first string:\n", string);
  scanf("%s", &string);

  char *p = string;
  while ( *p != '\0' ){
    if (*p <= '9' && *p >= '0'){
      flag = 0;
      g = 0;
    }
    p ++;
  }
  if (g != 0){
    printf("Enter the second string:\n", substring);
    scanf("%s", &substring);

    char *q = substring;
    while ( *q != '\0' ){
      if (*q <= '9' && *q >= '0'){
        flag = 0;
      }
      q ++;
    }
  }
  if (atoi(string) != 0 || atoi(substring) != 0){
    flag = 0;
  }

  //solution
  while (string[first] != '\0'){
    first++;
  }
  while (substring[second] != '\0'){
    second++;
  }
  for (i = 0; i <= first - second; i++){
    for (n = i; n < i + second; n++){
      indicator = 1;
      if (string[n] != substring[n - i]){
        indicator = 0;
        break;
      }
    }
    if (indicator == 1){
      break;
    }
  }
  if (flag == 0){
    printf("Invalid character entered\n");
  }
  else{
    if (indicator == 1)
      printf("the string '%s' is contained in the string '%s'\n", substring, string);
    else
      printf("the string '%s' is not contained in the string '%s'\n", substring, string);
  }
  return 0;
}
