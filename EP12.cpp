/*************************************************************************
	> File Name: 12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月07日 星期二 10时33分53秒
 ************************************************************************/


#include <stdio.h>

int num(int n) {
    return n * (n + 1) / 2;
}

int fac(int n) {
    int ret = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0)
            ret += 2;
    }
    return ret;
}
int main() {
    int n = 1;
    while (fac(num(n)) < 500) ++n;
    printf("%d\n", num(n));

    return 0;
}
