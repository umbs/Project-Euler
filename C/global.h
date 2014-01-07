#ifndef __GLOBAL_H__ 
#define __GLOBAL_H__ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <time.h> 


typedef signed char            int8_t; 
typedef unsigned char          uint8_t; 
typedef unsigned int           uint16_t; 
typedef unsigned long int      uint32_t; 
typedef signed long long int   int64_t; 
typedef unsigned long long int uint64_t;

/* check if 'n' is prime */
bool isPrime(int n); 

/* build a sieve of erathosthenes */
void sieve(); 

#endif 
