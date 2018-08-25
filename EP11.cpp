/*************************************************************************
	> File Name: 11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月03日 星期五 10时49分59秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int dir[4][2] = {0, 1, 1, 1, 1, 0, 1, -1};
    int num[30][30] = {0};
    for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            scanf("%d", num[i] + j);
        }
    }
    int ans = 0, temp = 0, x, y;
    for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            for (int k = 0; k < 4; k++) {
                temp = 1;
                for (int step = 0; step < 4; step++) {
                    x = i + step * dir[k][0];
                    y = j + step * dir[k][1];
                    temp *= num[x][y];
                }
                ans = ans > temp ? ans : temp;
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}
