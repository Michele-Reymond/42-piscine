#include <stdio.h>

int main(void)
{
  unsigned int i = 0;

  printf("start");

  while (i < 4000000000)
  {
    i++;
  }
  printf("end");

  return (0);
}
