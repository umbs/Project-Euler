/*
Problem:  
     2520 is the smallest number that can be divided by each of the numbers from 
     1 to 10 without any remainder.

     What is the smallest positive number that is evenly divisible by all of the 
     numbers from 1 to 20?
*/

#include <math.h> 

int main(int argc, char *argv[]) 
{
    /* smallest number divisible by all number from 1-20 */
    int N = 20, i; 
    unsigned long long int fact = 1; 
    unsigned long long int incr = 1, jump; 

    /* factorial */
    for(i=1; i<=N; i++)
        fact *= i; 

    printf("factorial of %d: %u\n", N, fact); 

    /* ALL primes between 1 and 20 = 2, 3, 5, 7, 11, 13, 17, 19 */
    incr = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19; 

    printf("incr: %u\n", incr); 

    for(jump = incr; jump <= fact; jump+= incr)
    {
        if((jump%2 == 0) && 
           (jump%3 == 0) && 
           (jump%4 == 0) && 
           (jump%5 == 0) && 
           (jump%6 == 0) && 
           (jump%7 == 0) && 
           (jump%8 == 0) && 
           (jump%9 == 0) && 
           (jump%10 == 0) && 
           (jump%11 == 0) && 
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
            printf("Found number: %u\n", jump); 

            break; 
        }
    }

    return 0; 
}
