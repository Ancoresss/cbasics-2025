#include <stdio.h>

int sumMainDiagonal(int arr[3][3]) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += arr[i][2-i];
			}
		return sum;
}
int main() {
	int arr[3][3] = {
	  {12, 2, 34},
	  {11, 5, 45},
	  {32, 87, 9}
};
	//for (int i = 0; i < 3; i++) {
		//for(int j = 0; j < 3; j++) {
		//printf("Enter arr[%d][%d]: \n", i, j);
		//scanf("%d",&arr[i][j]);
		//}
	//}
printf("sumMainDiagonal = %d\n", sumMainDiagonal(arr));

return 0;
}
