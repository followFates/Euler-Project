/*************************************************************************
	> File Name: 2.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月20日 星期二 16时09分21秒
 ************************************************************************/

#include<stdio.h>

#define MAX 4000000

int main() {
    int a[3] = {1, 1, 0}, ans[100] = {0};
    int len = 0;
    for (int i =  0; a[(i + 2) % 3] <= MAX; i++) {
        a[(i + 2) % 3] = a[i % 3] + a[(i + 1) % 3];
        if (a[(i + 2) % 3] & 1 == 0) {
            ans[0] += a[(i + 2) % 3];
            int t = 0;
            while (ans[t] >= 10) {
                ans[t + 1] = ans[t] / 10;
                ans[t] %= 10;
                t++;
            }
        }
    }
    for (int i = len; i >= 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
