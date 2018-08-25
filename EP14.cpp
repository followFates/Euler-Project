/*************************************************************************
	> File Name: 11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 17时48分24秒
 ************************************************************************/


#include <stdio.h>
#include <inttypes.h>
#define MAX_N 1000000
int keep[MAX_N + 5] = {1, 0};

int64_t get_length(int64_t d) {
    if (d == 1) return 1;
    if (d <= MAX_N && keep[d]) return keep[d];

    int temp;
        if (d & 1) 
            temp = 1 + get_length(3 * d + 1);
        else 
            temp = 1 + get_length(d / 2);
    
    if (d <= MAX_N) keep[d] = temp;
    return temp;
} 
    
int main() {
    int64_t ans = 0;
    int n = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (ans < get_length(i)) {
            ans = get_length(i);
            n = i;
        }
    }
    printf("%" PRId64 "\n", ans);
    printf("%d\n", n);

    return 0;
}
