/*
Problem:  
     2520 is the smallest number that can be divided by each of the numbers from 
     1 to 10 without any remainder.

     What is the smallest positive number that is evenly divisible by all of the 
     numbers from 1 to 20?
*/

#include "global.h"

int _5() 
{
    /* smallest number divisible by all number from 1-20 */
    int8_t N = 20, i; 
    uint64_t fact = 1; 
    uint64_t incr = 1, jump; 

    /* factorial */
    for(i=2; i<=N; i++)
        fact *= i; 

    /* ALL primes between 1 and 20 = 2, 3, 5, 7, 11, 13, 17, 19 */
    incr = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19; 

    for(jump = incr; jump <= fact; jump+= incr)
    {
        if((jump%11 == 0) && 
           (jump%12 == 0) && 
           (jump%13 == 0) && 
           (jump%14 == 0) && 
           (jump%15 == 0) && 
           (jump%16 == 0) && 
           (jump%17 == 0) && 
           (jump%18 == 0) && 
           (jump%19 == 0) && 
           (jump%20 == 0))
        {
            printf("Found number: %llu\n", jump); 
            break; 
        }
    }

    return EXIT_SUCCESS; 
}
