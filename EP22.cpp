/*************************************************************************
	> File Name: ep22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 16时06分26秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <inttypes.h>
#include <algorithm>
#include "022.h"

int main() {
    int64_t i = 0, len, sum, total = 0;
    while (nameList[i++].length() != 0) ;
    std::sort(nameList, nameList + i - 1);
    i = 0;
    while (nameList[i].length() != 0) {
        sum = 0;
        for (int j = 0; j < nameList[i].length()； j++) {
            sum += nameList[i][j] - 'A' + 1;
        }
        total += sum * (++i);
    }
    printf("%" PRId64 "\n", total);


    return 0;
}
