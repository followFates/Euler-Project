/*************************************************************************
	> File Name: 3.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月23日 星期五 00时06分24秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define MAX 600851475143

//举例num为6时，最大质因子为3
int main() {
    int64_t num = MAX, n = 2;
    int ans = 0;
    while (n * n <= num) {
        if (num % n == 0) ans = n;
        while (num % n == 0) num /= n;
        n++;
    }
    if (num != 1) ans = num;
    printf("%d", ans);
    return 0;
}
