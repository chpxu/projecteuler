#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double isprime(double k)
{
  double largest_factor = 0;
  // Assuming 0 is non-prime
  if (k < 0 || k == 0 || k == 1 || (k % 2 == 0 && k != 2))
  {
    return 0;
  }
  else if (k == 2 || k == 3 || k == 5 || k == 7 || k == 11)
  {
    return 1;
  }
  for (int i = 3; i * i < k; i += 2)
  {
    if (fmod(k, i) == 0)
    {
      largest_factor = i;
    }
  }
  return largest_factor;
}
int main(void)
{
  double target = 600851475143;
  int primality = 0;
  while (primality == 0)
  {
    double is = isprime(target);
    if (is)
  }

  printf("%lf", is);
  return 0;
}
