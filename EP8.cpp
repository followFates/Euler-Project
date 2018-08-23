/*************************************************************************
	> File Name: 8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 17时34分34秒
 ************************************************************************/
 
#include <stdio.h>
#include <inttypes.h>
#include "8.h"

int main() {
    int64_t product = 1, zero_num = 0, ans = 0;
    for(int i = 0; num[i]; i++) {
        if(!(num[i] - '0')) 
            zero_num++;
        else 
            product *= (num[i] - '0');
        
        if(i > 12) {
            if (!(num[i - 13] - '0'))
                zero_num--;
            else 
                product /= (num[i - 13] - '0');
        
            if (!zero_num && ans < product) {      
                ans = product;           
            }
        }
    }
    
    printf("%" PRId64 "\n", ans);
    
    return 0;
}
