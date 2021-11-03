#include <stdio.h>
int main()
{
	float a, b, c, x;
	printf("x=");
	scanf("%f", &x);
	a=1.0f;
	b=x;
	c=(a+b)/2;
	for (int i=0; i<=10; i++)
	{if (c*c>x)
	   {
	   b=c;
	   c=(a+c)/2;
       }   
	 else if (c*c<x)
	      {
	      a=c;
	      c=(b+c)/2;
		  }
		  else break;
	}
	printf("sqrt x=%.3f", c);
	return 0;
}
