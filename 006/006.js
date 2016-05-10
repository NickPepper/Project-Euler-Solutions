/*
( http://projecteuler.net/problem=6 )
Problem 6

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/


var n = 100;
var sqsum = (n * (n + 1) * (2 * n + 1)) / 6;
var sumsq = (1 + n) * n / 2;
print(sumsq*sumsq - sqsum);//25164150
// (time: 0.02s memory: 4984 kB on usual PC)


// krewllobster
// ------------
var a = 0, b = 0, x = 1;
while (x < 101) {
    a += Math.pow(x,2);
    b += x;
    x += 1;
}
print(Math.pow(b,2) - a);//25164150
// time: 0.01s    memory: 4984 kB

/*
Congratulations, the answer you gave to problem 6 is correct.
You are the 132085th person to have solved this problem.
*/

