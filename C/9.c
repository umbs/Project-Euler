/*---------------------------------------------------------------------------
 * a^2 + b^2 = c^2 
 *
 * a + b + c = 1000 
 *
 * There are 2 equations and 3 variables. We can reduce them to
 * 2 variables. 
 *
 * a^2 + b^2 = (1000 - a - b)^2
 *
 * This can be reduced to: 
 *
 * 2ab - 2000(a+b) + 1000000 = 0
 *
 * Other Solutions: 
 * One property of Pythogorean Triplet: If m & n are positive integers
 * then 2mn, m^2-n^2, m^2+n^2 form a triplet.
 *
 * Using this rule: a + b + c = 1000 means 
 * a = 2mn, b = m^2-n^2, c = m^2+n^2 
 *
 * a + b + c = 2m(m+n) = 1000 
 * m(m+n) = 500 
 *
 * There are multiple solutions to above equation, but m=20 and n=5 is the
 * solution to this problem. 
 *
 *---------------------------------------------------------------------------
 */
#include <stdio.h> 


int main() 
{
    unsigned int a,b; 

    for (a=1 ; a<=1000; a++) {
        for(b=1; b<=1000; b++) {
            if((1000000 - 2000*(a+b) + 2*a*b) == 0) {
                /* found the numbers*/
                goto done; 
            }
        }
    }

done: 
    printf("a=%u, b=%u c=%u\n", a,b, (1000-a-b)); 

    return 0; 
}
