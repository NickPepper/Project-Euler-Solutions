/*
( http://projecteuler.net/problem=15 )
Problem 15

Starting in the top left corner of a 2×2 grid, there are 6 routes (without backtracking) to the bottom right corner.
How many routes are there through a 20×20 grid?
*/

// gcc 015.c -time -o 015_c

#include <stdio.h>

int main(void) 
{
	int c, d;
	long long ans = 1;
	for(c = 40, d = 1; c > 20; c--, d++) {
		ans = (ans * c)/d;
	}
	printf("Answer: %lld\n", ans);// 137846528820
	return 0;
}
