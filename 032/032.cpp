/*
http://projecteuler.net/problem=32

Problem 32

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; 
for example, the 5-digit number, 15234, is 1 through 5 pandigital.

The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.

Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.

HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum.
*/

// g++ 032.cpp -time -o 032_cpp
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>

char dc[11];
#define CD(x) while(x){++dc[x % 10], x /= 10;}

bool pandigital(int a, int b, int c) {
	strcpy(dc, "0000000000");
	CD(a); CD(b); CD(c);
	return !strcmp(dc, "0111111111");
}

bool is_pandigital_product(int k) {
	for(int i = 2; ; ++i) {
		if(i * i > k) {
			return 0;
		} else if(!(k % i) && pandigital(i, k/i, k)) {
			return 1;
		}
	}
}

int main(void) {
	clock_t ini = clock();
	int ans = 0;
	for(int i = 1000; i < 10000; ++i) {
		if(is_pandigital_product(i)) ans += i;
	}
	printf("Time spent: %.3lfs\n", ((double)(clock() - ini))/CLOCKS_PER_SEC);
	printf("Answer: %d\n", ans);//45228
	return 0;
}

/*
P.S.: see http://www.worldofnumbers.com/ninedig1.htm if you wanna cheat ;)

    12 x 483 = 5796 
    42 x 138 = 5796 
    18 x 297 = 5346 
    27 x 198 = 5346 
    39 x 186 = 7254 
    48 x 159 = 7632 
    28 x 157 = 4396 
    4 x 1738 = 6952 
    4 x 1963 = 7852 
*/
