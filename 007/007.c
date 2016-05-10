/*
Project Euler. Solution to Problem 7
( http://projecteuler.net/problem=7 )
Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?

gcc 007.c -time -o 007_c
*/
#include <stdio.h>

int main() {
    const int max = 10001;
    int count = 0;
    unsigned int i, j;

    for(i = 2; ; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;
        }
        if(i == j) {
            count++;
            if(count == max)
                break;
        }
    }
    printf("%dst prime number is: %d\n", max, i);
	// 10001st prime number is: 104743
}

/*
Congratulations, the answer you gave to problem 7 is correct.
You are the 111499th person to have solved this problem.
Return to Problems page or go to thread 7 in the forum (http://projecteuler.net/thread=7).
*/


/*
15 Jun 2005 03:59 pm 
RogerHui
APL/J/K 
Canada	
You can use the prime number theorem http://mathworld.wolfram.com/PrimeNumberTheorem.html to get a pretty good estimate on how far you have to go. (Estimate on the size of the array p in the program.) pi(n), the number of primes less than n, is asymptotically n%^.n (n divided by ln n). 
For the 10001-th prime, the equation is 10001=n%^.n, and solving for n you get that n is between 1.1e5 and 1.2e5. 
The actual number, the 10001-th prime, is 104743. 

Aside: in J, p: n gives the n-th prime (counting starts at 0). J also implements the inverse 
of a function whenever possible. Therefore, p:^:_1 (the inverse of p:) is pi(n), the number of primes less than n . 

So the J solution for Problem 7:
p: 10000
*/

