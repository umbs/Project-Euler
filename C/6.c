int main() 
{
    /* Result = (2) - (1) = nx(n+1)x(n-1)x(3n+2)/12 */
    unsigned long long R = 0; 

    int N=100; 

    R = N * (N+1) * (N-1) * (3*N+2)/12;

    printf("%u\n", R); 

    return 0; 
}
