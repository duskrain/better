for(i=j;a[i]!='\0';i++);
a[i+2]='\0';
for(i=i+1;i>j;i--)
{
	a[i]=a[i-1];
}
