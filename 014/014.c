/*
http://projecteuler.net/problem=14

Problem 14

The following iterative sequence is defined for the set of positive integers:

n -> n/2 (n is even)
n -> 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.
*/

// gcc 014.c -std=c99 -time -o 014_c

#include <stdio.h>

int main()
{
    int longest = 0;
    int terms = 0;
    int i;
    unsigned long j;

    for(i = 1; i <= 1000000; i++)
    {
        j = i;
        int this_terms = 1;

        while (j != 1)
        {
            this_terms++;

            if(this_terms > terms) {
                terms = this_terms;
                longest = i;
            }

            if(j % 2 == 0) {
                j = j / 2;
            } else {
                j = 3 * j + 1;
            }
        }
    }

    printf("longest: %d (%d)\n", longest, terms);
    return 0;
}


/*
 Answer: 837799 (taken from http://oeis.org/A006877)

 1, 2, 3, 6, 7, 9, 18, 25, 27, 54, 73, 97, 129, 171, 231, 
 313, 327, 649, 703, 871, 1161, 2223, 2463, 2919, 3711, 6171, 
 10971, 13255, 17647, 23529, 26623, 34239, 35655, 52527, 77031, 
 106239, 142587, 156159, 216367, 230631, 410011, 511935, 626331, 837799 



http://www.wolframalpha.com/input/?i=collatz+problem :
------------------------------------------------------
Collatz problem
formulation date: 1937 (75 years ago) 
formulator: Lothar Collatz
formulation source: Asked by Collatz in 1937 when he was a student.
status: open
prize offered for solution: Thwaites (1996) offered a 1.000 GBP reward for resolving the conjecture.
current evidence: Known to always reach 1 for n<=19*2^58 (5.476.377.146.882.523.136)



http://en.wikipedia.org/wiki/Collatz_conjecture :
-------------------------------------------------
A specific Hailstone sequence can be easily computed, as is shown by this pseudocode example:

function hailstone(n)
	while n > 1
		show n
		if n is odd then
			set n = 3n + 1
		else
			set n = n / 2
		endif
	endwhile
	show n

This program halts when the sequence reaches 1, in order to avoid printing an endless cycle of 4, 2, 1.
If the Collatz conjecture is true, the program will always halt (stop) no matter what positive starting integer is given to it.




http://codewords.wordpress.com/category/project-euler/:
-------------------------------------------------------

def is_even(n):
	return n % 2 == 0

def collatz_length(n):
	length = 0
	while n > 1:
		length += 1
		if is_even(n):
			n /= 2
		else:
			n = 3 * n + 1
	return length

max_n = 0
max_len = 0
for n in range(1, 1000000):
	len = collatz_length(n)
	if len > max_len:
		max_len = len
		max_n = n

print max_n 
*/

