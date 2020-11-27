/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/

#define PI 3.1415 /*Defining PI as a constant*/

/* Function: Main
 parameters: int argc (argument count)
  char *argv[] an array of command-line arguments
  description:  Takes a single argument and computes area of circle
   */

int main(int argc, char *argv[])
{
   /* variable initialisation */
    int radius = 0;
    float area = 0.0;
    float first = 0.0;
    float second = 0.0;
    int height;
           /* all command-line arguments come in as character strings, so atoi turns them into ints*/
    radius = atoi(argv[1]);
    height = atoi(argv[2]);

    first = (2 * PI * radius * height);

    second  = (2 * radius * radius * PI); /* calculate area of circle */

    area = first + second;
                         /* print to two decimal places*/
    printf ("%.2f\n", area);
    return (0); /* exit correctly*/
} /* end program*/
