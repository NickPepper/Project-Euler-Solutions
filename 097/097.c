/*
Large non-Mersenne prime
Problem 97
The first known prime found to exceed one million digits was discovered in 1999, and is a Mersenne prime of the form 26972593−1; it contains exactly 2,098,960 digits. Subsequently other Mersenne primes, of the form 2p−1, have been found which contain more digits.

However, in 2004 there was found a massive non-Mersenne prime which contains 2,357,207 digits: 28433 * 2 ^ 7830457 + 1

Find the last ten digits of this prime number.
*/


/*
 * BUILD:
 *  gcc -std=c99 -Wall -O3 097.c -o 097_c
 *
 * RUN: 
 *      time ./097_c
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	__int64_t res = 1;
	for (__int64_t i = 0; i < 7830457; i++)
	{
		res <<= 1;
		res %= 10000000000; // 10^10
	}
	res *= 28433;
	res %= 10000000000;
	res++;
	printf("res: %lld\n", res);
	/*
	res: 8739992577

	real	0m0.140s
	user	0m0.123s
	sys		0m0.004s
	*/

    return 0;
}
