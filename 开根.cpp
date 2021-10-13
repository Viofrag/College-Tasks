#include <stdio.h>
int main()
{
  float a, b, c;
  int i;
  a=1;
  b=2;
  c=1.5000f;
  i=1;
  do
  {
  if (c * c > 2)
     {
	 b = c;
	 c = (a + c) / 2;
     }
  else {a = c;
        c = (b + c) / 2;
       }
  i++;
  }while (i<=30);
  printf("sqrt2=%.5f", c);
  return 0;
}
