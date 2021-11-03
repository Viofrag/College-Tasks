#include <stdio.h>

int judge(int n,int i)//ÅÐ¶ÏnÊÇ²»ÊÇÖÊÊý 
{
	int a=0;
	if(n==2)
	  a=1;
	else
	{
	for (i=2;i<n;i++)
	{
	if (n%i!=0)
	  a=1;
	else
	  {
	  a=0;
	  break;
	  } 
    }
    }
    return a;
}

int sum(int n)
{
	int k;
	if (n<1000)
	  k=n/100+n/10%10+n%10;
	else
	  k=n/1000+(n/100)%10+(n/10)%10+n%10;
	return k;
}

int sqr_sum(int n)
{
	int h;
	if (n<1000)
	  h=(n/100)*(n/100)+((n/10)%10)*((n/10)%10)+(n%10)*(n%10);
	else
	  h=(n/1000)*(n/1000)+((n/100)%10)*((n/100)%10)+((n/10)%10)*((n/10)%10)+(n%10)*(n%10);
	return h;
}

int main()
{
	int n, i, b, c, d, h, k, s;
	int x=0;
	float avg;
	s=0;
	for (n=100;n<=10000;n++)
	  {
	  i=2;
	  b=judge(n,i);
	  if(b==1)
		{
	    c=sum(n);
	    b=judge(c,i);
	    if(b==1)
	      {
	      	d=sqr_sum(n);
	      	b=judge(d,i);
	      	if(b==1)
	      	{
	      		printf("%d\n", n);
	      		s+=n;
	      		x++;
			}
		  }
		}
	  }
	(float)s;
	(float)x;
	avg=s/x;
	printf("average=%.1f", avg);
	return 0;
}
