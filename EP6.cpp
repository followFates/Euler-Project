/*************************************************************************
	> File Name: 6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时55分24秒
 ************************************************************************/


#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main() {
    int64_t sum1, sum2;
    sum1 = pow((1 + 100) * 100 / 2, 2);
    sum2 = 100 * (100 + 1) * (2 * 100 + 1) / 6;
    printf("%d\n", sum1 - sum2);

    return 0;
}
