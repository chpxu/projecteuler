# [Question 3](https://projecteuler.net/problem=3)
The prime factors of $13195$ are $5,7,13$ and $29$


What is the largest prime factor of the number $600851475143$?

## Solution

My C and Python solutions are similar, both $O(\sqrt{n})$ time complexity, in that it will only search through the first $\text{floor}(\sqrt{n})$ numbers given a number $n$ to check whether it is prime. In both cases, factors are found until the largest factor is reached