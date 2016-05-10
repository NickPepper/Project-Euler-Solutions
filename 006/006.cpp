/*
( http://projecteuler.net/problem=6 )
Problem 6

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

// g++ 006.cpp -time -o 006_cpp

#include <cstdio>
#include <ctime>
#define n 100

int main(void) {
	clock_t ini = clock();
	int sqsum = (n * (n + 1) * (2 * n + 1)) / 6, sumsq = (1 + n) * n / 2;
	printf("Time spent: %.3lfs\n", ((double)(clock() - ini))/CLOCKS_PER_SEC);
	printf("Answer: %d\n", sumsq*sumsq - sqsum);
	return 0;
}
