/* */

#include <stdio.h> 

int input[20][20]; /* hard coding the matrix size */

long vertical() 
{
        long result = 0, v_result = 0; 	
	int i,j, a, b, c, d;
	
	/* vertical */
        result = v_result = 0; 
	for(j=0; j<20; j++) {
		for(i=0; i<17; i++) {
			result = input[i][j] * input[i+1][j] * input[i+2][j] * input[i+3][j]; 
		
			if(result > v_result) { 
				v_result = result;
			       	a = input[i][j]; b = input[i+1][j]; c = input[i+2][j]; d = input[i+3][j]; 
			}	       
		}

	}
	printf("v_result: %ld, (%d,%d,%d,%d)\n", v_result, a,b,c,d);

	return v_result; 
}

long horizontal() 
{
        long result = 0, h_result = 0; 	
	int i,j, a, b, c, d;
	
	/* horizontal */
        result = h_result = 0; 
	for(i=0; i<20; i++) {
		for(j=0; j<17; j++) {
			result = input[i][j] * input[i][j+1] * input[i][j+2] * input[i][j+3]; 
		
			if(result > h_result) { 
				h_result = result;
			       	a = input[i][j]; b = input[i][j+1]; c = input[i][j+2]; d = input[i][j+3]; 
			}	       
		}

	}
	printf("h_result: %ld, (%d,%d,%d,%d)\n", h_result, a,b,c,d);

	return h_result; 
}

long backDiagnol() 
{
        long result = 0, h_result = 0; 	
	int i,j, a, b, c, d;
	
	/* horizontal */
        result = h_result = 0; 
	for(i=0; i<17; i++) {
		for(j=0; j<17; j++) {
			result = input[i][j] * input[i+1][j+1] * input[i+2][j+2] * input[i+3][j+3]; 
		
			if(result > h_result) { 
				h_result = result;
			       	a = input[i][j]; b = input[i+1][j+1]; c = input[i+2][j+2]; d = input[i+3][j+3]; 
			}	       
		}

	}
	printf("h_result: %ld, (%d,%d,%d,%d)\n", h_result, a,b,c,d);

	return h_result; 
}

long frontDiagnol() 
{
        long result = 0, h_result = 0; 	
	int i,j, a, b, c, d;
	
	/* horizontal */
        result = h_result = 0; 
	for(i=0; i<17; i++) {
		for(j=0; j<17; j++) {
			result = input[i][j+3] * input[i+1][j+2] * input[i+2][j+1] * input[i+3][j]; 
		
			if(result > h_result) { 
				h_result = result;
			       	a = input[i][j+3]; b = input[i+1][j+2]; c = input[i+2][j+1]; d = input[i+3][j]; 
			}	       
		}

	}
	printf("h_result: %ld, (%d,%d,%d,%d)\n", h_result, a,b,c,d);

	return h_result; 
}

int main() 
{
	FILE *fp;
        long v_result = 0, h_result = 0, b_result = 0, f_result = 0; 
        int i,j; 	

	fp = fopen("11.txt", "r"); 

        /* error check */	

	/* array input */
	for(i=0, j=0; i < 20; j++) { 
		if(j==20) {
			j = 0; i++; 
		}

	        fscanf(fp, "%d", &input[i][j]); 	
	}

	v_result = vertical();
        h_result = horizontal(); 
        b_result = backDiagnol(); 
        f_result = frontDiagnol(); 	

	return 1; 
}
