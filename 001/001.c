/*
Project Euler. Solution to Problem 1
( http://projecteuler.net/problem=1 )
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

gcc 001.c -time -o 001_c
*/
#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    while(i < 1000)
    {
        if(i%3 == 0 || i%5 == 0) //if(!(i % 3) && !(i % 5))
            sum += i;

        i++;
    }
    printf("The sum of all natural numbers below one thousand that are multiples of 3 or 5 is: %d\n", sum);

    return 0;
}

/*
Congratulations, the answer you gave to problem 1 is correct.
You are the 210842nd person to have solved this problem.
Return to Problems page or go to thread 1 in the forum (http://projecteuler.net/thread=1).
*/

