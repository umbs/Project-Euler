#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

typedef unsigned long long uint64_t;
typedef unsigned int uint_t;
typedef unsigned char bool;  

int main() {

        uint64_t N = 104729; /* 10000th prime */
        uint64_t prime, i; 
        uint_t sroot, k;
        bool isPrime;

        /* look for next prime number */
        for(i = N+1; ; i++) {
                prime = i;
                sroot = (uint_t )sqrt((double)prime);
                isPrime = TRUE; 
                
                for(k=2; k<=sroot; k++) {
                        if(prime%k == 0) {
                                isPrime = FALSE;
                                break;
                        }
                }

                if(isPrime) {
                        /* found prime */
                        break;
                }
        }

        printf("10001th prime is: %llu \n", prime);

        return 0;
}

