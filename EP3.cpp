/*************************************************************************
	> File Name: 3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时31分59秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define NUM 600851475143

int main() {
    int64_t num = NUM, n = 2, ans = 0;
    while(n * n <= num) {
        if (num % n == 0) ans = n;
        while (num % n == 0) num /= n;
        n++;
    }
    if (num != 1) ans = num;
    printf("%" PRId64 "\n", ans);
    
    return 0;
}
