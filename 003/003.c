/*
( http://projecteuler.net/problem=3 )

Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

algorithm is taken from https://github.com/ajmarin/coding/blob/master/euler/e003.cpp

// gcc 003.c -std=c99 -time -o 003_c
*/
#include <stdio.h>

int main() {
	long long num = 600851475143LL;
	int ans = 0;
	for(int div = 3; ; div += 2) {
		if(!(num % div)) {
			do {num /= div;} while (!(num % div));
			if(num == 1) {
				ans = div;
				break;
			}
		}
	}
	printf("Answer: %d\n", ans);//6857
	return 0;
}

/*
Congratulations, the answer you gave to problem 3 is correct.
You are the 127054th person to have solved this problem.
*/

/*
cheat 1) http://www.rsok.com/~jrm/factor.html
cheat 2) http://www.alpertron.com.ar/ECM.HTM
cheat 3) http://math-it.org/Mathematik/Zahlentheorie/Zahl/ZahlApplet.html
*/
