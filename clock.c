#include <stdio.h>
#include <windows.h>
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
	while (1)
     	{
	    	CLOCK1.second++;
			if(CLOCK1.second==60)
			{
				CLOCK1.second=0;
				CLOCK1.minute++;
			}
			if(CLOCK1.minute==60)
			{
				CLOCK1.minute=0;
				CLOCK1.hour++;
			}
			if(CLOCK1.hour==24)
			{
				CLOCK1.hour=0;
			}	
			system("cls");
			printf("%02d:%02d:%02d",CLOCK1.hour,CLOCK1.minute,CLOCK1.second);
			Sleep(1000);
		}
	}
		else
		{
			printf("error");
		}
	return 0;
}
