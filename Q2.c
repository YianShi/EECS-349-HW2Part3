#include <stdio.h>

int main(void) {
	int arr[8] = {12, 15, 221, 3, 432, 54, 16, 67};
	int max = 0;
	int index = 0;
	
	do {
		if(arr[index] > max) {
			max = arr[index];
		}
		index++;
	}while(index <= 7);
	
	printf("%d", max);
	
	return 0;
}
