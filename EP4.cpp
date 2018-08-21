/*************************************************************************
	> File Name: EP4.cpp
	> Author:tiger 
	> Mail:3115629644@qq.com 
	> Created Time: 2018年08月21日 星期二 08时55分49秒
 ************************************************************************/


#include <stdio.h>

int main() {
 
    int n = 2520, i;
    while (n) {
        for (i = 11; i <= 20; i++) {
            if (n % i != 0) break;
        }
        if (i == 21) break;
        n++;
    }
    printf("%d\n", n);
    return 0;
}
