/*************************************************************************
	> File Name: 10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 17时37分58秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define MAX_N 2000000

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}


int main(){
    int64_t sum = 0;
    init();
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) sum += i;
    }
    printf("%" PRId64 "\n", sum);

    return 0;
}
