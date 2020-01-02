#include <stdio.h>
int main()
{
	float r,h,pi;
	float l,s,qs,qv,zv;
	printf("请输入半径和高度。"); 
	scanf("%f %f",&r,&h);
	pi=3.14;
	l=2*pi*r;
	s=pi*r*r;
	qs=4*pi*r*r;
	qv=4/3*pi*r*r*r;
	zv=s*h;
	printf("圆周长为%.2f\n",l);
	printf("圆面积为%.2f\n",s);
	printf("圆球表面积为%.2f\n",qs);
	printf("圆球体积为%.2f\n",qv);
	printf("圆柱体积为%.2f\n",zv);
	return 0;
}
