#include <stdio.h>
int main()
{
	int n,w,q,b,s,g;
	scanf("%d",&n);
	if (n>0 && n<100000)
	{
		w = n / 10000;
		q = n / 1000 - w * 10;
		b = n / 100 - w * 100 - q * 10;
		s = n / 10 - w * 1000 - q * 100 - b * 10;
		g = n - w * 10000 - q * 1000 - b * 100 - s * 10;

	if (w !=0)
	{
		printf("%d %d %d %d %d", w, q, b, s, g);
	}
	else if ((w==0)&& (q = !0))
		{
		printf("%d %d %d %d", q, b, s, g);
	    }
	else if ((w==0)&&( q == 0) && (b !=0))
		{
		printf("%d %d %d", b, q, g);
	    }
	else if ((w==0) && (q == 0 )&& (b == 0 )&& (s!=0))
		{
		printf("%d %d", s, g);
	    }
	else if ((w==0 )&& (q == 0 )&& (b == 0 )&& (s == 0) &&( g !=0))
		{
		printf("%d",g);
	    }
	} 
else
	{
		printf("erorr!");
	}
	return 0;
} 
