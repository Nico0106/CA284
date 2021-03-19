/*** palindrome.c
Author: Nicolas Oyeleye
* date: 07/12/2020
* description: Checks if the given sentence is a palindrome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/** Function palindrome
  @Params: array, int (etc. you fill in this yourself)*/

void palindrome(char str[]);
void Remove(char * p, char * c);

int main(int argc, char *argv[])
{
  // declaring variables
  char string[100];
  int i, n , c = 0, flag = 1;
  // taking string from standard input
  printf("Please enter a string:  \n", string);
  scanf("%[^\n]%*c", &string);
  n = strlen(string);

  // checking if string contains numbers
  char *q = string;
  while ( *q != '\0' ){
    if (*q <= '9' && *q >= '0'){
      flag = 0;
    }
    q ++;
  }

  if (flag == 1){
    // Removing all quotation, question marks, and apostrophes
    Remove(string, ",");
    Remove(string, "?");
    Remove(string, "'");

    //Concatenating string
    int j = 0;
    for (i = 0; i < strlen(string); i++){
      if (string[i] != ' '){
        string[j++] = string[i];
      }
    }
    string[j] = '\0';

    // changing case
    for (i = 0; string[i]!='\0'; i++) {
      if(string[i] >= 'A' && string[i] <= 'Z') {
         string[i] = string[i] + 32;
      }
    }
    // Giving string to palindrome function
    palindrome(string);
  }
  else{
    printf("Invalid input: Numbers not permitted.\n\n");
  }
}

void palindrome(char str[]){
  // Start from leftmost and rightmost corners of str
  int l = 0;
  int h = strlen(str) - 1;
  while (h > l){
    if (str[l++] != str[h--]){
      printf("This string is not a palindrome.\n", str);
      return;
    }
  }
  printf("this string is a palindrome.\n", str);
}

void Remove(char * p, char * c){
  if (NULL == p){
    return;
  }
  char * pDest = p;

  while (*p){
    if (*p != *c){
      *pDest++ = *p;
    }
    p++;
  }
  *pDest = '\0';
}
