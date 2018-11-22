/*************************************************************************
	> File Name: 2.c
	> Author: LHC 
	> Mail: 3115629644@qq.com 
	> Created Time: 2018年11月22日 星期四 23时40分01秒
 ************************************************************************/
//循环数组、大数数组存储、循环判断逻辑
#include<stdio.h>
#define MAX 4000000
int main() {
    int n = 0, f[3] = {1, 0, 0}, ans[100] = {1};
    do {
        n++;
        f[n % 3] = f[(n + 2) % 3] + f[(n + 1) % 3];
        if (f[n % 3] % 2 == 0) {
            ans[1] += f[n % 3];
            int t = 1;
            while (ans[t] >= 10) {
                ans[t + 1] += ans[t] / 10;
                ans[t] %= 10;
                t++;
            }
            ans[0] = ans[0] < t ? t :ans[0];
        }
        printf("1");
    } while (f[n % 3] <= MAX);
    for (int i = ans[0]; i > 0; i--) 
        printf("%d", ans[i]);
    return 0;
}
