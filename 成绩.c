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
//�������Ĺ����ǴӼ�������������ѧ����ѧϰ�ɼ���ͳ�Ʋ������߳ɼ�����ͳɼ���������Ϊ����ʱ�˳�
