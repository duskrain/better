#include <stdio.h>
int main()
{
    float pi=1,t,s=1,i=1,j;
    scanf("%f",&t);
    while(2*s>=t)
    {
        s=s*i/(2*i+1);
        pi=pi+s;
        i=i+1;
    }
    printf("%7f",pi*2);
     
    return 0;
}
