/*
 * 019.c
 *
 * Project Euler Problem #19 Solution
 *
 *  Created on: May 17, 2015
 *  Author: Nick Pershin
 *
 * see here for math: http://code.jasonbhill.com/category/project-euler/
 *
 * BUILD:   gcc -std=c99 -Wall -O3 -o 019_c 019.c -lm
 *
 * RUN:     time ./019_c
 */

//
// Задача 19
// Считаем воскресенья
//
// Дана следующая информация (однако, вы можете проверить ее самостоятельно):
//
// 1 января 1900 года - понедельник.
// В сентябре, апреле, июне и ноябре 30 дней.
// В феврале 28, в високосный год - 29.
// В остальных месяцах по 31 дню.
// Високосный год - любой год, делящийся нацело на 4, однако первый год века (ХХ00) является високосным в том и только том случае, если делится на 400.
//
// Сколько воскресений выпадает на первое число месяца в двадцатом веке (с 1 января 1901 года до 31 декабря 2000 года)?
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int day_of_week(int year, int month, int day) 
{
    // Using the Gaussian algorithm
    int d = day; 
    double m = (double) ((month - 3) % 12 + 1);
    int Y;
    if(m > 10)  Y = year - 1;
    else        Y = year;
    int y = Y % 100;
    int c = (Y - (Y % 100)) / 100;
    int w = ((d+(int)floor(2.6*m-0.2)+y+ y/4 + c/4 -2*c))%7;
    return w; 
}

 
long months_start_range(int day, int year_start, int year_end) 
{
    unsigned long total = 0;
    int year, month;
    for(year = year_start; year < year_end; year++) {
        for(month = 1; month <= 12; month++) {
            if(day_of_week(year, month, 1)==day) total++;
        }
    }
    return total;
}

 
int main(int argc, char **argv) 
{ 
    int iter = 0;
    long total;
    while(iter < 100000) {
        total = months_start_range(0,1901,2000);
        iter++;
    }
    printf("Solution: %ld\n",total); 
    return 0;
}
