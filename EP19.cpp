/*************************************************************************
	> File Name: 19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 17时45分22秒
 ************************************************************************/


#include <stdio.h>
#include <inttypes.h>

int whichDay(int y, int m, int d) {
    if(m == 1 || m == 2) {
        --y;
        m += 12;
    }
    int w;
    w = (d + 2 * m + 3 * (m + 1) / 5
              + y + y / 4 - y / 100
        + y / 400) % 7;
    return w;
}

int main() {
    int sunday = 0;
    for (int y = 1901; y < 2001; ++y) {
        for (int m = 1; m <= 12; ++m) {
            if (whichDay(y, m, 1) == 6)
                ++sunday;
        }
    }
    printf("%d\n", sunday);
    
    return 0;
}
