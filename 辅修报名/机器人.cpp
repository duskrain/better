#include <stdio.h>

#include <string.h>

int main()

{

  char s[100];

  scanf("%[^\n]", s);

  if (strcmp(s, "how are you") == 0) {

    printf("i am fine\n");

  }

  else

  {

    printf("error\n");

  }

}



