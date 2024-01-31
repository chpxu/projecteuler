#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void generate_fibonacci(double upper_bound, double *store, size_t size)
{
  double first_term = 1;
  double second_term = 2;
  double temp1, temp2;
  store[0] = first_term;
  // size_t size = sizeof(store) / sizeof(store[0]);
  long int i = 1;
  while (store[size - 1] < upper_bound)
  {
    temp1 = second_term;
    temp2 = second_term + first_term;
    first_term = temp1;
    second_term = temp2;
    store[i] = first_term;
    i++;
  }
}
int main(void)
{
  // Upper bound is 4,000,000 in this question
  long int i;
  double sum_of_even = 0;
  double upper_bound = 4000000;
  // Function to generate Fibonacci Numbers derived from quadratic x^2 -x - 1 = 0
  // Can solve for right size to allocate array
  double numsize = 10000;
  double *sequence_store = (double *)malloc(numsize * sizeof(double));
  size_t size = sizeof(&sequence_store) / sizeof(sequence_store[0]);
  generate_fibonacci(upper_bound, sequence_store, size);
  printf("%lf", sequence_store[size - 1]);
  for (i = 0; i < size; i++)
  {
    if (!(fmod(sequence_store[i], 2) == 0))
    {
      continue;
    }
    sum_of_even += sequence_store[i];
  }
  free(sequence_store);
  return 0;
}