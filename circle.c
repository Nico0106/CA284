#include <stdio.h>

#define PI 3.1415

/*you must declare you're function before you using.
End with a semi colon and when you use it later
you don't need a semi colon*/
void calculateArea (int radius, float *area);
/* void means the function doesn't return anything*/

int main (void)
{

  int radius = 0;
  float circleArea = 0.0;

  printf ("Enter the radius for the circle: ");
  scanf{"%d",&radius};
  /* scanf when you want an input*/
  calculateArea (radius, &circleArea);

  printf ("The area of the circle is:
  %f6.2", &circleArea);
  return (0);
}

void calculateArea (int radius, int circleArea)
{
  *circleArea = PI*(radius*radius);
}
