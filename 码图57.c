#include <stdio.h>
int CalString(char *str)
{
	int i,s=0;
	for(i=0;;i++)
	{
		if(*(str+i)=='\0')
		{
			return s;
		}
		else
		{
			if(!((*(str+i)>=65)&&(*(str+i)<=90) || (*(str+i)>=97 && *(str+i)<='z') || (*(str+i)>='0' && *(str+i)<='9')))
			{
				s++;
			}
		}
	}
}

int main()
{
	return 0;
}
