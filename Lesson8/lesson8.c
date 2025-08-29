#include <stdio.h>

int main()
{
	    int nums[] = {10, 11, 13, 15, 1, 5, 2, 3, 20, 19};
	        int suma = 0;
		     int suma2 = 0;
		         float avg = 0;
		    
		             for (int i = 0; i < 10; i++) {
		                     suma += nums[i];
		                         //  suma /= 10;
		                             }
		    
		                                 printf("%d\n", suma);
		                                     avg = (float) suma / 10;
		                                         // suma2 = suma / 10;
		    
		                                             printf("%.2f\n", avg);
		
		                                               return 0;
 }
