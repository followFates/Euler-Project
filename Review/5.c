/*************************************************************************
	> File Name: 5.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月23日 星期五 09时17分10秒
 ************************************************************************/

#include<stdio.h>

int gcd(int, int);

int gbs(int a, int b) {
    return a * b / gcd(a, b);
}

int gcd(int a, int b) {
    if (a < b)
        a ^= b ^= a ^= b;
    if (b == 0) 
        return a;
    return gcd(b, a % b);
}

int main() {
    int n = 2520;
    for (int i = 11; i <= 20; i++) {
        if (n % i != 0) {
            n = gbs(n, i);
        }
    }
    printf("%d\n", n);
    return 0;
}
