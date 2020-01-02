#include <stdio.h>
int main()
{
	int number;
	char high,low;
	scanf("%d",&number);
	printf("0x%x\n",number);
	low=number&0xff;
	number>>=8;
	printf("0x%x\n",low);
	printf("0x%x\n",number);
	high=number&0xff;
	printf("0x%x\n",high);
	number=low;
	number<<=8;
	number=number|high;
    printf("0x%x",number);
	return 0;
}
