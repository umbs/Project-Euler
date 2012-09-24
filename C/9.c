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
 *
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
