#include <stdio.h>

int main()
{
  int x,y;

  for (x=200; x<250; x++)
  {
    y=x%2;

    if (y==1)
    {
      printf("%d\n", x);
    }
    else
    {

    }
  }
  return 0;
}
