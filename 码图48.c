#include <stdio.h>

int main()
{
    int i,a,n[11],b;
    for (i=0;i<=9;i++)
{
    scanf("%d",&n[i]);
}
     for(i=0;i<=9;i++)
{
       for(a=i;a<=8;a++)
      {
        if(n[i]>n[a+1])
        {
             b=n[i];
                    n[i]=n[a+1];
               n[a+1]=b;
         }
      }
}
  for (i=0;i<=9;i++)
{
    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,",n[0],n[1],n[2],n[3],n[4],n[5],n[6],n[7],n[8],n[9]);
}
}
