#include <stdio.h>

int main(int argc, char *argv[])
{
	char str[21]={};
	int i;
	for(i=0;;i++)
	{
		str[i]=getchar();
		if(str[i]=='\n')
		{
			if(i==0)
			{
				printf("error");
				return 0;
			}
			break;
		}
		if((str[i]>=65 && str[i]<=86) || (str[i]>=97 && str[i]<=118))
		{
			str[i]=str[i]+4;
		}
		else if((str[i]>=119 && str[i]<=122)||(str[i]>=87 && str[i]<=90))
		{
			str[i]=str[i]-22;
		}
		else
		{
			printf("error");
			return 0;
		}
		if(i==19)
		{
			str[20]='\0';
			break;
		}
	}
	printf("%s",str);
	return 0;
}
