# [Question 1](https://projecteuler.net/problem=1)

If we list all the natural numbers below $10$ that are multiples of $3$ or $5$, we get $3$, $5$, $6$ and $9$. The sum of these multiples is $23$.

Find the sum of all the multiples of $3$ or $5$ below $1000$.

## Solution

The condition of the question requires an integer $n \in \{z\in \mathbb{Z} : n \text{is divsible by 3 or 5}\}$ which is a finite set (since $n \leq 1000$ by assumption) to find the sum. This means we can discard all numbers which are **not** multiples of $3$ or $5$, by using a for loop and checking whether a number is not divisible by either one of them. If this condition is true, skip the number, and if it is false, append to some array. Then summing over the array (which will have no duplicates) will produce the sum.

The solution is $O(n)$ in time complexity since each `if` is executed once per number and does not depend on any other elements.