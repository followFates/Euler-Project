/*************************************************************************
	> File Name: EP3.cpp
	> Author:tiger 
	> Mail:3115629644@qq.com 
	> Created Time: 2018年08月20日 星期一 21时14分28秒
 ************************************************************************/


#include <stdio.h>
#include <inttypes.h>
#define NUM 600851475143

int main() {

    int64_t n = 2, num = NUM;
    int ans;
    while (n * n <= num) {
        if (num % n == 0) ans = n;
        while (num % n == 0) num /= n;
        n++;
    }
    if (num != 1) ans = num;
    printf("%d\n", ans);
    return 0;
}
