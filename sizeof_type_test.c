#include <stdio.h>

int
main(int argc, char *argv[])
{
  printf("%d\n", sizeof(char));
  printf("%d\n", sizeof(int));
  printf("%d\n", sizeof(double));
  printf("%d\n", sizeof(char *));
  printf("%d\n", sizeof(int *));
  printf("%d\n", sizeof(double *));
  return(0);
}
