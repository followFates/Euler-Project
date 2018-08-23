/*************************************************************************
	> File Name: ep09.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 20时30分56秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a, b, c;
    for (int i = 1; i <32; ++i) {

        for (int j = i + 1; j <= 32; ++j) {
            a = j * j - i * i;
            b = 2 * i * j;
            c = i * i + j * j;
            if ((a + b + c) == 1000) {
                printf("%d\n", a * b * c);
            }
        }
    }
    return 0;

}
