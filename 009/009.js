/*
http://projecteuler.net/problem=9

Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

// see the logic for this solution here: http://codewords.wordpress.com/2011/01/17/project-euler-problem-9-solution/

var limit = 500,
	product = 0,
	pow_M = 0, 
	pow_N = 0;

for(var n = 3; n < limit; ++n) {
    for(var m = 4; m < limit; ++m) {
        product = m * (m + n);
        if(product == limit) {
        	pow_M = Math.pow(m, 2);
        	pow_N = Math.pow(n, 2);
        	print((pow_M - pow_N) * (2*(m*n)) * (pow_M + pow_N));
        	n = limit;
        	break;
        }
    }
}

// time: 0.01s    memory: 4984 kB
// output: 31875000


/*
Congratulations, the answer you gave to problem 9 is correct.
You are the 99646th person to have solved this problem.
You have earned 1 new award:
Decathlete: Solve ten consecutive problems
*/
