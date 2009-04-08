#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
  int c;
  int i=0;
  int flag = 0;
  while ((c = fgetc(stdin)) != EOF) {
    if (c == '\n') {
      flag = 0;
      i++;
    } else {
      flag = 1;
    }
  }
  if (flag == 1) {
    i++;
  }
  printf("%d\n", i);
  exit(0);
}
