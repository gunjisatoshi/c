#include <stdio.h>

int
main(int argc, char *argv[])
{
  const int a = 0;
  int b;
  b = (int)&a;
  printf("%d\n", &a);
  printf("%d\n", b);
  printf("%d\n", a);
  printf("%d\n", *(int *)b);
  return(0);
}
