/*
( http://projecteuler.net/problem=15 )
Problem 15

Starting in the top left corner of a 2×2 grid, there are 6 routes (without backtracking) to the bottom right corner.
How many routes are there through a 20×20 grid?
*/


var ans = 1;
for(var c = 40, d = 1; c > 20; --c, ++d) {
	ans = (ans * c)/d;
}

print(ans);// 137846528820
// time: 0.02s    memory: 4984 kB

/*
Congratulations, the answer you gave to problem 15 is correct.
You are the 53180th person to have solved this problem.
*/


/*
0)
http://mathschallenge.net/full/random_routes

1)
11 Aug 2004 10:24 pm 
RudyPenteado, Assembler, Brazil	

This is what I find 2 months ago when I solved it: 
Each movement in the horizontal is a zero. 
Each movement in the vertical is a one. 
1st binary# in this series: 
0000000000000000000011111111111111111111 
last: 
1111111111111111111100000000000000000000 
For the numbers in between, the amount of zeros should be the same as ones. 
In other words, the ones and zeros have to be rearranged. 
The total is: 40!/(20!)(20!) // [(2n)!]/[n!*n!]
Just use the MS calculator. 
137846528820 
Best, Rudy. 

2)
http://mathforum.org/advanced/robertd/manhattan.html

3)
Central Binomial Coefficient in J:
(! +:) 20x
OR EVEN MORE SHORTER:
20!40x


4)
All you need is to observe that for a NxN grid there are (2n)!/(n!)^2 possible ways of getting from one corner to the other one. 
If you are unable to calculate it you can use A000984

5)
(40!)/(20!20!) == 40 choose 20

6)
It is about permutations.
A tip: Google calculator has the operator 'choose': http://www.google.com/search?q=40+choose+20

7)
07 Jan 2007 07:46 pm 
thome
I spent a while trying to work out the solution on paper first, 
until I saw the same thing roxtar saw. Here was my java solution: 

public long solve() {
	long right[] = {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	long current[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int x=0;x<20;x++) { 
		for(int y = 0;y<21;y++) { 
			if(y==0) { 
				current[y] = 1; 
			} else { 
				current[y] = current[y-1] + right[y];
			}
		}
		right = current;
	}
	return current[20];
} 

Really cool to see how some people solved this one :)


8)
16 Apr 2007 01:37 am  
sasquatch

NO CODING NEEDED AT ALL FOR THIS QUESTION! 
Notice that any grid like this ultimately is related to Pascal's triangle. 
In the 2x2 grid, 
1 1 1 
1 2 3 
1 3 6 
each number represent the number of way to reach each point. 
notice that pascal's triangle looks like 
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 

6 is simply, using combinations, 2*2 C 2. 
Therefore, the number of ways through a 20 x 20 grid is: 20*2 C 20 or 40 C 20. 
This is given by http://en.wikipedia.org/wiki/Combinations so:
C/C++
n= 40!/(20!)^2


9)
18 Jun 2007 03:52 am 
wtwood

After coding up the brute-force solution and watching it not return I replaced code with thought, worked out the caching/dynamic-programming solution, then while doodling with some little tables to work out details I saw Pascal's Triangle. 
Some more thought convinced me that that was right combinatorially. So I replaced all that array-munging code with a routine for calculating binomial coefficients. I decided not to implement it with factorials -- memory-intensive and slow for bigger numbers. 
The following is a fairly efficient algorithm, calculating C(m,n) by the product (m/n)*[(m-1)/(n-1)]* ... * [(m-n+1)/1]. 
Common Lisp: 
(defun euler015 (n m) 
	(choose (+ n m) (min n m))) 

(defun choose (n k) 
	(let ((c 1)) 
		(dotimes (i k) 
			(setf c (/ (* c (- n i)) (- k i)))) 
		c)) 

*/

