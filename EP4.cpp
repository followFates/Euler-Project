/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时54分12秒
 ************************************************************************/


#include <stdio.h>


int is_palindromic(int x) {
    int temp = x, num = 0;
    while (x) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    if (temp == num) return 1;
    return 0;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for(int j = 100; j < 1000; j++) {
            if (!is_palindromic(i * j)) continue;
            if (ans < i * j) ans = i * j;
        }
    }
    printf("%d\n", ans);

    return 0;
}
