#include <stdio.h>
#include <math.h>
int main()
{
 int i,a,b,c;
 int k;
 for(i=100;i<1000;i++)
 {
  a=i/100;//百位// 
  b=(i/10)%10;//十位// 
  c=i%10;
  k=pow(a,3)+pow(b,3)+pow(c,3);
  if(k==i)
     {
	  printf("%d\n",i);
	 } 
 }
 return 0;
}
