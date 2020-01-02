#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char str[257];
	int i=0,j,judge;
	gets(str);
	judge=0;
	for(j=0;str[j]!='\0';j++)
	{
		if((str[j]>=65 && str[j]<=90) || (str[j]>=97 && str[j]<=121) || (str[j]>=48 && str[j]<=57))   //数字，怎么能算单词呢 
		{
			judge=1;
			continue;
		}
		else if(str[j]!=' ')
		{
			judge=0;
			while(str[j]!=' ' && str[j]!='\0')
			{
				++j;
				if(str[j]=='\0')
				{
					break;
				}
			}
			continue;
		}
		else if(judge && (str[j]==' '))
		{
			judge=0;
			++i;
		}
	}
	if(judge)
	{
		++i;
	}
	printf("%d",i);
	return 0;
}
