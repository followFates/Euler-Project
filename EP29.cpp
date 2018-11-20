/*************************************************************************
	> File Name: 29.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时02分51秒
 ************************************************************************/


#include <stdio.h>
#include <math.h>

int r[35] = {1, 1, 0};

int main() {

    for (int i = 1; i <= 100; i++) {
        for(int j = 1; j <= r[0]; j++) {
            r[j] *= 2;
        }
        for(int j = 1; j <= r[0]; j++) {
            if (r[j] < 10) continue;
            r[j + 1] += r[j] / 10;
            r[j] = r[j] % 10;
            r[0] += (j == r[0]);
        }
       printf("%d -> %d\n", i, r[0]); 
    }
    for(int i = r[0]; i >= 1; i--) {
        printf("%d", r[i]);
    }
    printf("\n");
    return 0;
}
