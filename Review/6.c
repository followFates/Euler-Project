/*************************************************************************
	> File Name: 6.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月23日 星期五 10时50分57秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
        sum2 += i * i;
    }
    sum1 *= sum1;
    printf("%d\n", sum1 - sum2);
    return 0;
}
