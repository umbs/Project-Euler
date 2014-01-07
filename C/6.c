/* 
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.  
*/ 

#include "global.h" 

int _6() 
{
    /* Result = (2) - (1) = nx(n+1)x(n-1)x(3n+2)/12 */
    uint64_t R = 0; 

    int N=100; 

    R = N * (N+1) * (N-1) * (3*N+2)/12;

    printf("%llu\n", R); 

    return 0; 
}
