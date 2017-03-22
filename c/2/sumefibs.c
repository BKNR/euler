#include "sumefibs.h"

int sum_efibs(int limit) {
    int sum = 0;
    int a = 1;
    int b = 1;
    int c = a + b;

    while (c < limit) {
        sum = sum + c;
        a = b + c;
        b = c + a;
        c = a + b;
    }

    return sum;
}
