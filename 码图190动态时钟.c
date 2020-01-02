#include <stdio.h>
#include <time.h>
struct clock
{
    int hour;
    int minute;
    int second;
};

typedef struct clock CLOCK;

int main(int argc, char *argv[])
{
	CLOCK CLOCK1;
	scanf("%d,%d,%d",&CLOCK1.hour,&CLOCK1.minute,&CLOCK1.second);
	if(CLOCK1.hour>=0 && CLOCK1.hour<24 && CLOCK1.minute>=0 && CLOCK1.minute<60 && CLOCK1.second>=0 && CLOCK1.second<60)
	{
		printf("%02d:%02d:%02d",CLOCK1.hour,CLOCK1.minute,CLOCK1.second);
		int h,m,s;
		h=CLOCK1.hour;
		m=CLOCK1.minute;
		s=CLOCK1.second;
		while(1) 
		{
			Sleep(1000);
			s++;
			if(s==60)
			{
				m++;
				s=0;
			}
			if(m==60)
			{
				h++;
				m=0;
			}
			if(h==24)
			{
				h=0;
			}
			system("cls");
			printf("%d,%d,%d\n",CLOCK1.hour,CLOCK1.minute,CLOCK1.second);
			printf("%02d:%02d:%02d",h,m,s);
		}
	}
	else
	{
		printf("error");
	}
	
	return 0;
}
