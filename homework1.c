#include <stdio.h>
#include <math.h>

<<<<<<< HEAD
int main(){
  int a, b; 
  float average;
 
  printf("Entered first number: ");
  scanf("%d", &a);

  printf("Entered second number: ");
  scanf("%d", &b);

  average = (a + b) / 2.0;
  printf("Average = %.2f\n", average);

 return 0; 
  
  }

=======
int main() {
  float number;

  printf("Enter the number: ");
  scanf("%f", &number);
  number = number*3;
  printf("Result:%f\n", number);

  return 0;
}
>>>>>>> 858ddb88b3b64243691d38210e48bde83c2a1c2d
