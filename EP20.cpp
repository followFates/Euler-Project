/*************************************************************************
	> File Name: ep20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 15时28分53秒
 ************************************************************************/

#include <stdio.h>
#define BASE 10

int main() {
    int a[500] = {1, 1, 0};
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= a[0]; j++) {
            a[j] *= i;
        }
        for (int j = 1; j <= a[0]; j++) {
            if (a[j] < BASE) continue;
            a[j + 1] += a[j] / BASE;
            a[j] = a[j] % 10;
            a[0] += (j == a[0]);
        }
    }
    int sum = 0;
    for (int i = 1; i <= a[0]; i++) {
        sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}
