#include<stdio.h>
int main()
{
 char ch;
 char s[80];
    int i,j;
    gets(s);
 scanf("%c",&ch);
    for(i=j=0;s[i]!='\0';i++)
    {if(s[i]!=ch)
    s[j++]=s[i];}
    s[j]='\0';
    printf("%s\n",s);
    return 0;
}
