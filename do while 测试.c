#include <stdio.h>
int main()
{
	double s = 0.0;
  
  float k = 1;
  int n = 7;
  float d = 1;
  do
  {
    s = s + d;
    d = 1.0 / (k*(k + 1));
  }
  while((k++)<=n-1); 
  printf("%.3f", s);
	return 0;
}
