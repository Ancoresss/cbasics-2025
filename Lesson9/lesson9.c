#include <stdio.h>

int d2array[4][3] = {
{6, 3, 1}, 
{5, 2, 7}, 
{3, 24, 54},
{97, 45, 32};
}
    
for (int i = 0; i < 4; i++) {
   for (int j = 0; j < 3; j++) {
       printf("%.3d\n", d2array[i][j]);
      }
  }
   
return 0;
}
