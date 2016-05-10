/*
 * 020.c
 *
 * Project Euler Problem #20 Solution
 *
 *  Created on: May 17, 2015
 *  Author: Nick Pershin
 *
 *
 * see here for math: http://code.jasonbhill.com/category/project-euler/
 *
 * BUILD:
 *  gcc -std=c99 -Wall -O3 020.c -o 020_c
 *
 * RUN: 
 *      time ./020_c
 */

//
// Задача 20
// Сумма цифр факториала
//
// n! means n × (n − 1) × ... × 3 × 2 × 1
// For example, 10! = 10 × 9 × ... × 2 × 1 = 3628800 and the sum of the digits in the number 10! is 27.
//
// Find the sum of the digits in 100!
//
#include <stdio.h>

unsigned long long defactorial(unsigned int n) 
{
    unsigned int counter = n;
    unsigned long long sum = 1;
    if (n > 0) {
        while(counter) {
            sum += sum * --counter;
        }
    }
    return sum;
}

// unsigned int sum_digits(unsigned int n) {
//     return sum([int(i) for i in str(n)]);
// }

int main(int argc, char **argv) {
    //printf("result: %d\n", sum_digits(factorial(100)) );
    unsigned long long sumfac = defactorial(60);
    printf("result: %llu\n", sumfac);// 648 must be
    return 0;
}
