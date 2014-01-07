/* 
 * Find the largest prime factor for 600851475143. 
 *
 * Solution: 
 * `primes.txt` file has 1st 10000 prime numbers. I saved it in an array
 * and checked for factor from behind
 *
 * Bug: 
 * It is possible that a prime after 10000th prime could be a factor and
 * this method does not catch it. 
 *
 * */

#include "global.h"  

int isPrime(int N) 
{
    int i; 
    if(N<1 || N==2 || N%2==0) return 0; 
    
    uint16_t m = (uint16_t) sqrt((double)N); 
    
    for(i=3; i<=m; i+=2) 
        if(N%i==0)
                return 0; 
    
    return 1; 
}

int _3() 
{
    FILE *fp; 
    uint16_t sqroot; 
    uint16_t i; 

    uint64_t N = 600851475143;
    sqroot = (uint16_t) sqrt((double)N); 

    printf("sqroot: %d\n", sqroot); 

    for(i=sqroot; i >= 3; i--) {
            if(isPrime(i)) // largest prime found 
            {
                    printf("Largest Prime: %d\n", i);
                    break; 
            }
    }
    
    return EXIT_SUCCESS; 
}
