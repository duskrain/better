#include <stdio.h>
int main()
{
	float r,h,pi;
	float l,s,qs,qv,zv;
	printf("������뾶�͸߶ȡ�"); 
	scanf("%f %f",&r,&h);
	pi=3.14;
	l=2*pi*r;
	s=pi*r*r;
	qs=4*pi*r*r;
	qv=4/3*pi*r*r*r;
	zv=s*h;
	printf("Բ�ܳ�Ϊ%.2f\n",l);
	printf("Բ���Ϊ%.2f\n",s);
	printf("Բ������Ϊ%.2f\n",qs);
	printf("Բ�����Ϊ%.2f\n",qv);
	printf("Բ�����Ϊ%.2f\n",zv);
	return 0;
}
