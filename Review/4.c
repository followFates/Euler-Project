/*************************************************************************
	> File Name: 4.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月23日 星期五 01时17分42秒
 ************************************************************************/

#include<stdio.h>

int is_palindromic(int n) {
    int m = 0, temp = n;
    while (temp != 0) {
        m = m * 10 + temp % 10;
        temp /= 10;
    }
    return m == n;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (is_palindromic(i * j)) {
                ans = ans < (i * j) ? (i * j) : ans;   
            } 
        }
    }
    printf("%d\n", ans);
    return 0;
}
