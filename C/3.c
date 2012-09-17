/*---------------------------------------------------------------------------
 * 
 * 3.c 
 *
 *     09/13/2012 - 
 *
 *     <supadhy@sj.us.am.ericsson.se>
 *
 *     Copyright (c) 2012 RedBack Networks, Inc.
 *     All rights reserved.
 *
 *---------------------------------------------------------------------------
 */

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

#include <stdio.h> 

int main() 
{
    FILE *fp; 
    unsigned int primes[10000]; 
    unsigned int i; 

    unsigned long long N = 600851475143; 

    /* primes.txt file contains 1st 10000 primes */
    fp = fopen("primes.txt", "r");

    for(i=0; i<10000; i++) {
        fscanf(fp, "%d %d", &i, &primes[i]); 
    }

    fclose(fp); 

    for(i=9999; i>0; i--) {
        if (N%primes[i] == 0) {
            printf("Largest prime: %u\n", primes[i]); 
            goto done; 
        }
    }

done: 
    return 0; 
}
