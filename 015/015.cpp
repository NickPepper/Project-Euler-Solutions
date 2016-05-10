/*
( http://projecteuler.net/problem=15 )
Problem 15
19 April 2002
Starting in the top left corner of a 2×2 grid, there are 6 routes (without backtracking) to the bottom right corner.
How many routes are there through a 20×20 grid?
*/

// g++ 015.cpp -time -o 015_cpp

#include <cstdio>
#include <ctime>

int main(void) {
	clock_t ini = clock();
	long long ans = 1;
	for(int c = 40, d = 1; c > 20; c--, d++) {
		ans = (ans * c)/d;
	}
	printf("Time spent: %.3lfs\n", ((double)(clock() - ini))/CLOCKS_PER_SEC);
	printf("Answer: %lld\n", ans); // 137846528820
	return 0;
}
