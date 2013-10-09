/* Find sum of all primes below 2 million */

#include <stdio.h> 

#define LIMIT 2000000 

long nums[LIMIT+1]; 

/* Seive of Erathostheans. As per Wikipedia, run time of O(N lg(lg N)). 
 *
 */
void evalPrimes() 
{
	long i, j, x; 

	for(i=1; i<=LIMIT; i++) 
		nums[i] = i; 
        
        for(i=2; i<=LIMIT; i++) {
		if(!nums[i])
			continue; 
	
		for(x=nums[i], j=2; x*j <= LIMIT; j++) { 
			nums[x*j] = 0; 
		}
	}
}

int isPrime(long pr) 
{
	return nums[pr]; 
}

int main() 
{ 
	long sum = 0, i; 

	evalPrimes(); 

	for(i=2; i<=LIMIT; i++) 
		if(isPrime(nums[i]))
			sum += nums[i]; 

	printf("%ld\n", sum); 

	return 0; 
}

