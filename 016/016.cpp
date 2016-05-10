/*
http://projecteuler.net/problem=16

Problem 16

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?
*/

// g++ 016.cpp -time -o 016_cpp

#include <cmath>
#include <cstdio>
#include <ctime>

char v[350];
void multi(int q) {
    int c = 0, i;
	for(i = 0; v[i]; ++i) {
		c = ( (v[i] - '0') * q + c );
		v[i] = '0' + c % 10;
		c /= 10;
    }
    while(c) { 
		v[i++] = '0'+(c%10);
		c /= 10;
	}
	v[i] = 0;
}

int main(void) {
	clock_t ini = clock();
	int ans = 0;
	v[0] = '1'; 
	v[1] = 0;
	for(int i = 0; i < 1000; ++i) {
		multi(2);
	}
	for(int i = 0; v[i]; ++i) {
		ans = ans + v[i] - '0';
	}
	printf("Time spent: %.3lfs\n", ((double)(clock() - ini))/CLOCKS_PER_SEC);
	printf("Answer: %d\n", ans);
	return 0;
}
/*
Congratulations, the answer you gave to problem 16 is correct.
You are the 70718th person to have solved this problem.
*/

