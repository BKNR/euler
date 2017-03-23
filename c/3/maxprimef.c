#include "maxprimef.h"

unsigned int max_prime_fac(long long num) {
    unsigned int max_prime = 0;
    unsigned int div = 2;
    while (num > 1) {
        while (num % div == 0) {            
            if (div > max_prime) max_prime = div;
            num /=  div;
        }
        div += 1;
    }
    return max_prime;
}
