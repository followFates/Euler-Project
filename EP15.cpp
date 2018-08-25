/*************************************************************************
	> File Name: 15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月04日 星期六 23时01分56秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main() {
    int64_t ans = 1, m = 20;
    for (int32_t i = 40; i > 20; --i) {
        ans *= i;
        while (ans % m == 0 && m != 1) {
            ans /= m;
            --m;
        }
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
