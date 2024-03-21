# [Question 4](https://projecteuler.net/problem=4)
A palindromic number reads the same both ways. The largest palindrome made from the product of two -digit numbers is

$$9009 = 91 \times 99$$

Find the largest palindrome made from the product of two $3$-digit numbers.

## Solution

A 3 digit number of the form "$abc$" can be decomposed as $100a + 10b + c$. Therefore a product of two $3$-digit numbers $abc \times def$ can be written as a linear expansion in powers of $10$, and so we can compare the first and last digits modulo $10$, and then move the running indices inside 1 if they match, and if not, just continue.

For every palindrome detected, we store it in a temporary variable. Then for every subsequent palindrome, since we are searching in ascending order, we can reassign the value of the temp variable to the new palindrome.