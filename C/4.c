/*---------------------------------------------------------------------------
 * 
 * 4.c 
 *
 *     09/16/2012 - 
 *
 *     <supadhy@sj.us.am.ericsson.se>
 *
 *     Copyright (c) 2012 RedBack Networks, Inc.
 *     All rights reserved.
 *
 *---------------------------------------------------------------------------
 */
#include <stdio.h> 

/* 
 * Find largest palindrome that is a product of 2 three digit numbers. 
 *
 * Solution: 
 * Brute Force: Find product of 3 digits from 100 to 999 and test if the
 * result is a palindrome 
 * 
 * Analysis 1: A palindrome in this problem should be, generally speaking, 
 * 6 digits in length: abccba 
 * 100000a + 10000b + 1000c + 100c + 10b + a 
 * = 100001a + 10010b + 1100c 
 * = 11 x (9091a + 910b + 100c) where 1<=a<=9; 0<=b<=9; 0<=c<=9
 *
 * The search for this simplification will be much smaller than brute force 
 * as its "only" on 900 entries 
 * 
 * */
#define TRUE               1
#define FALSE              0

typedef unsigned char      uint8_t;  
typedef unsigned short     uint16_t; 
typedef unsigned int       uint32_t; 
typedef unsigned long long uint64_t; 
typedef uint8_t            bool; 

/* Gives number of digits in N */ 
uint8_t numDigits(uint64_t N) 
{   uint8_t digits = 1; 

    while ((N = N/10) > 0) 
        digits++; 
    
    return digits; 
}

bool isPalindrome(char *strNum, uint8_t strLen) 
{   
    uint8_t i; 

    for(i=0; i<strLen/2; i++) {
        if(strNum[i] != strNum[strLen-i-1]) 
            return FALSE; 
    }

    return TRUE; 
}

int main() 
{   
    uint64_t   x, y;
    uint8_t    digits; 
    char strNum[32];
    uint64_t   pal = 0; 

    for(x=999; x>99; x--) {
        for(y=x; y>99; y--) {

            /* eliminate some cases */

            /* can't have palindrome ending in 0 */
            if((x%10 == 0) || (y%10 == 0))
                continue;

            /* can't have palindrome ending in 0 */
            if ((x%10 == 5) && (y%2 == 0)) 
                continue; 
            else if ((y%10 == 5) && (x%2 == 0))
                continue; 

            sprintf(strNum, "%llu", x*y);
            digits = numDigits(x*y);
            strNum[digits] = '\0'; 

            if(isPalindrome(strNum, digits)) {
                if(pal < x*y) 
                    pal = x*y; 
            }
        }
    }

    printf("Palindrome: %llu\n", pal); 
done: 
    return 0; 
}
