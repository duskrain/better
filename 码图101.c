#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {int a=0,b=0;unsigned int c=0;	scanf("%d %d",&a,&b);while(b>=32){b-=32;}while(b<=32){b+=32;}c=(unsigned)a;if(b>0){c=(c<<b|c>>(32-b));}if(b<0){c=(c>>abs(b)|c<<(32-abs(b)));}a=(int)c;printf("%d",a);return 0;}
