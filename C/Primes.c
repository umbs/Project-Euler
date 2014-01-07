/* Utility functions to calculate primes */

#include "global.h"

/* true if n is prime and false otherwise */
bool isPrime(int n) 
{
        if(n<1 || n%2==0) return false; 
        if(n==2) return true; 

        int m = (int)sqrt((double)n); 
        int i; 

        for(i=3; i<=m; i+= 2) {
                if(n%i == 0) 
                        return false; 
        }

        return true; 
}

#if 0 
bool primeList[INT_MAX] = {0}; 
#endif 

/* sieve of erathosthens */
void sieve() 
{
        uint16_t  idx, a;
        uint16_t  sqroot = (uint16_t)sqrt((double)INT_MAX); 

        printf("INT_MAX: %d, sqroot of INT_MAX: %d\n", INT_MAX, sqroot); 
#if 0 
        for(idx=2; idx<sqroot; idx++) {
                for(a = idx; (primeList[a]==0) && (a<sqroot); a += idx) 
                        primeList[a] = 1; 
        }
#endif 

        /*primeList[] now contains prime numbers (indices with value 1) */
}
