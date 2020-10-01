# GCD
In mathematics, the greatest common divisor of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. For two integers x, y, the greatest common divisor of x and y is denoted. For example, the gcd of 8 and 12 is 4. <sup>[Wikipedia](https://en.wikipedia.org/wiki/Greatest_common_divisor)</sup>


This folder contains the programs to calculate the GCD of two numbers.

## Notes

1. To calculate GCD of two numbers when the numbers are very large can take many iterations if we try to brutefore the solution.
1. It is know that GCD(A, B) = GCD(A', B) where A = BQ + A'.
1. We'll use this knowledge to create our algorithm. 