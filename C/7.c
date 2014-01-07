/* 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that
the 6th prime is 13.

What is the 10 001st prime number?
*/ 

#include "global.h"  

#define TRUE 1
#define FALSE 0

/* contains list of primes */
int primeList[10003];
int primeCount; 

/* whole number line until 1000001. Primes have 1 value and rest have 0 */
int sieveList[10000001]; 
int targetCount; 

void print() 
{
        int i; 
        for(i=0; i<primeCount; i++) 
                printf("%d ", primeList[i]); 

        printf("\n"); 
}

void countingMethod() 
{
        int num, i; 

        /* initialization */
        primeCount = 1; 
        primeList[0] = 2; /* 1 isn't a prime */

        for(num=3; primeCount < 101; num+=2) {
                for(i=0; i<primeCount; i++) {
                        if(num%primeList[i] == 0) 
                                break; /* num is divisible by one of the primes */ 
                }

                /* num is a prime */
                if(i==primeCount) {
                        primeList[primeCount] = num; 
                        primeCount++; 
                }
        }

        printf("%s: 100th prime: %d\n", __FUNCTION__, primeList[100]); 
}

void sieveMethod() 
{
        int i, j; 
 
        for(i=0; i<10000001; i++) 
                sieveList[i] = 1; 

        for(i=2, targetCount=0; targetCount < 101; i++) {
                if(sieveList[i] == 1) /* prime number */ {
                        targetCount++; 

                        for(j=i; j<10000001; j+= i) {
                                sieveList[j] = 0; 
                        }
                }
        }

        for(i=0, j=0; i<10000001; i++) {
                if(sieveList[i] == 1) /* prime */ {
                        j++;

                        if(j == 100) {
                                printf("%s: 100th prime: %d\n", __FUNCTION__, i);
                                break; 
                        }
                }
        }
}

int main() 
{
        countingMethod();

        sieveMethod(); 

        return 0; 
}

