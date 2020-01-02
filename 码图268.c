#include <stdio.h>

int main(int argc, char *argv[]) 
{
	double a,b,result;
	char c,d='y';
	while(d=='y')
	{
		scanf("%lf %c %lf",&a,&c,&b);
		getchar();
		if(b<10e-6)
		{
			printf("error\n");
		}
		else
		{
			if(c=='+')
				printf("%.2lf %c %.2lf = %.2lf\n",a,c,b,a+b);
			else if(c=='-')
				printf("%.2lf %c %.2lf = %.2lf\n",a,c,b,a-b);
			else if(c=='*')
				printf("%.2lf %c %.2lf = %.2lf\n",a,c,b,a*b);
			else if(c=='/')
			{
				if(b==0)
					printf("error\n");
				else
					printf("%.2lf %c %.2lf = %.2lf\n",a,c,b,a/b);
			}
			else
				printf("error\n");
		}
		
		d=getchar();
		getchar();
	}
	return 0;
}
