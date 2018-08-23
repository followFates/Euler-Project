/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时59分47秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 200000

int prime[MAX_N + 5] = {0};

int init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }

}
int main() {
    init();
    int sum = 0;
    int i = 0;
    for ( i = 2; sum < 10001; i++) {
            if (!prime[i]) sum++;
    }

    printf("%d\n", i - 1);

    return 0;
}
