// g++ 010.cpp -time -o 010_cpp

#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>

#define MAX 2000000
bool p[MAX];

int main(void) 
{
	clock_t ini = clock();
	memset(p, 1, sizeof(p));
	int lim = sqrt(MAX) + 1;
	//printf("lim: %d\n", lim);//1415
	long long ans = 2;
	for(int i = 4; i < MAX; i += 2) {
		p[i] = 0;
	}

	for(int i = 3; i < lim; i += 2) {
		if(p[i]) {
			ans += i;
			for(int j = i * i; j < MAX; j += i) {
				p[j] = 0;
			}
		}
	}

	for(int i = lim + !(lim & 1); i < MAX; i += 2) {
		if(p[i]) {
			ans += i;
		}
	}
	
	printf("Time spent: %.3lfs\n", ((double)(clock() - ini))/CLOCKS_PER_SEC);
	printf("Answer: %lld\n", ans);
	return 0;
}

/*
Congratulations, the answer you gave to problem 10 is correct.
You are the 89792nd person to have solved this problem.
*/

