/*
http://projecteuler.net/problem=28

Problem 28

Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

		21 22 23 24 25
		20  7  8  9 10
		19  6  1  2 11
		18  5  4  3 12
		17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
*/


/*
21 Jul 2004 04:33 pm 
euler

Of course the whole problem can be solved without the aid of a computer, but I went somewhere in-between...
First I noted that for an n by n grid, and n being odd, the number in the top right corner is n^2. 
A little mathematical analysis told me that the other corners are given by: n^2-n+1, n^2-2n+2, and n^2-3n+3. Adding these together gives the quadratic, 4n^2-6n+6. 
Then all I had to do was create a loop from 3 to 1001 in steps of 2 and find the running total (starting from 1) of the quadratic.
*/

var s = 1;
for(var n = 3; n <= 1001; n += 2) {
    s += 4 * Math.pow(n,2) - 6 * n + 6;
}
print(s);
//time: 0.02s    memory: 4984 kB
//output: 669171001


/*
Congratulations, the answer you gave to problem 28 is correct.
You are the 39019th person to have solved this problem.
*/
