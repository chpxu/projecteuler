#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
  int maxnum = 1000;
  int sum = 0;
  int i;
  int *multiples = (int *)calloc(maxnum, sizeof(int));
  for (i = 3; i < maxnum; i++)
  {
    if (!(i % 3 == 0 || i % 5 == 0))
    {
      continue;
    }
    multiples[i] = i;
  }
  for (i = 0; i < maxnum; i++)
  {
    sum += multiples[i];
  }
  printf("%d", sum);
  free(multiples);
  return 0;
}