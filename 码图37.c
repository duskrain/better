#include <stdio.h>
#include <string.h>
int main () 
{
    char b[51]={0},c[51];
    int i,j=0,t=-1;
    gets(c);
    for(i=0;(c[i]!='\0')||(i<50);i++)
    {
        if((c[i]>47 && c[i]<58)||(c[i]>='a' && c[i]<='z')||(c[i]>='A' && c[i]<='Z'))
        {
        	b[j]=c[i];
        	j++;
            t=-1;
            continue;
        }
        else if(c[i]!=t)
        {
            t=c[i];
            b[j]=c[i];
            j++;
        }
        else
        {
            continue;
        }
    }
    b[j-1]='\0';
    puts(b);
    return 0;
}
