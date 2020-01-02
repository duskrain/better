#include <stdio.h>
int main()
{
	float i=1,bp=1,s=1,n;
	scanf("%f",&n);
	while (2*s>=n)
    {
    s=s*i/(2*i+1);
    bp=s+bp;
    i++;
    }
    printf("%.6f",bp*2);
	return 0;
}
