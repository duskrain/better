#include<stdio.h>
int main()
{
float x,amax,amin;
scanf("%f",&x);
amax=x;
amin=x;
while( x>=0 )
{ 
if(x>amax) 
amax=x;
if(x<amin) amin=x;
scanf("%f",&x);
}
printf("\namax=%.2f\namin=%.2f\n",amax,amin);
	return 0;
}
//下面程序的功能是从键盘上输入若干学生的学习成绩，统计并输出最高成绩和最低成绩，当输入为负数时退出
