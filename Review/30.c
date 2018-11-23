/*************************************************************************
	> File Name: 30.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月23日 星期五 11时24分54秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

int main() {
    int d = pow(9, 5), i, sum = 0, ans = 0;
    for (i = 1; d * i > pow(10, i); i++) {}
    for (int j = 2; j < pow(10, i); j++) {
        int temp = j, m;
        sum = 0;
        while (temp) {
            m = temp % 10;
            temp /= 10;
            sum += pow(m, 5);
        }
        if (sum == j) 
            ans += j;
    }
    printf("%d\n", ans);
    return 0;
}
