/*
Project Euler. Solution to Problem 4
( http://projecteuler.net/problem=4 )
Problem 4

A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

gcc 004.c -time -o 004_c
*/
#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int const num) {
	unsigned int res = 0;
	unsigned int n = num;
	while(n > res) {
		res = res*10 + n%10;
		n /= 10;
	}
 	return n == res;
}

int main() {
	int i, j, c = 0;
	unsigned int res = 0;
	/*
	The palindrome can be written as:
		abccba
	Which then simpifies to:
		100000a + 10000b + 1000c + 100c + 10b + a 
	And then:
		100001a + 10010b + 1100c

	Factoring out 11, you get:
		11(9091a + 910b + 100c)
	So the palindrome must be divisible by 11.
	Seeing as 11 is prime, at least one of the numbers must be divisible by 11.
	So brute force only with less numbers to be checked:
	lets iterate only through the highest 100
	*/
	for(i = 999; i > 899; i--) {
		for(j = 999; j > 899; j--) {
			res = i*j;
			c++;
			if(is_palindrome(res)) {
				printf("\nThe largest palindrome is %d\nMade from %d and %d\nDiscovered at iteration %d\n\n", res, i, j, c);
				i = 899;
				break;
			}
		}
	}
	return 0;
}
/*
The largest palindrome is 906609
Made from 993 and 913
Discovered at iteration 687

Congratulations, the answer you gave to problem 4 is correct.
You are the 116881st person to have solved this problem.
You have earned 1 new award:
    Baby Steps: Solve three problems
Return to Problems page or go to thread 4 in the forum ( http://projecteuler.net/thread=4 ).
*/



/*
23 May 2005 08:26 pm 
Begoner
Python 
Romania	

You can also do this with pen and paper. 
You have a number: 
	(100a + 10b + c)(100d + 10e + f) 
which is a palindrone. 
This factors out to: 
				   100cd + 10ce + cf + 
  		  1000bd + 100be + 10bf + 
10000ad + 1000ae + 100af 

Assuming the first digit is 9, then cf must be equal to nine. 
Also, both a and d must then be equal to nine. 
The only ways to make the last digit of the product of two integers 9 would be if those integers were either of: 

	1 and 9
	3 and 3
	7 and 7

So, both numbers must start with 9, end with either 1, 3, 7, or 9, and one of them must be divisible by 11. 
The only numbers divisible by 11 from 900 - 1000 are: 

	902
	913
	924
	935
	946
	957
	968
	979
	990

You can discard all of those that do not end in either 1, 3, 7, or 9, and you are left with: 

	913
	957
	979

So now the presumed answer is either:

	(900 + 10 + 3)(900 + 10x + 3)
	(900 + 50 + 7)(900 + 10x + 7)
	(900 + 70 + 9)(900 + 10x + 1)

Factoring all those out, you get:

	810000 + 9000x + 2700 + 9000 + 100x + 30 + 2700 + 30x + 9
	824439 + 9130x

Now, for the first digit 824439 + 9130x to be 9, x must be 9 (if x were 8, then 824439 + 9130x = 897479, and the first digit is 8). 
And so you have 913 * 993, which is the answer. 
You can factor the others out to see if they produce a bigger answer, which they don't.

*/

