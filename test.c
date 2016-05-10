#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(unsigned int const num) {
    unsigned int res = 0;
    unsigned int n = num;
    while(n > res) {
        res = res*10 + n%10;
        n /= 10;
    }
    return n == res;
}

int main() {
    int i;
    for(i = 100; i < 600; ++i) {
        if(is_palindrome(i))
            printf("%d\n", i);
    }
    return 0;
}

