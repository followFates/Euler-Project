/*************************************************************************
	> File Name: 28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时00分00秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int sum = 1;
    for (int n = 3; n <= 1001; n += 2) {
        sum += 4 * pow(n, 2) - 6 * n + 6; 
    }
    printf("%d\n", sum);

    return 0;
}
