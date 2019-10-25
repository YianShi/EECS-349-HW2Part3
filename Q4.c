#include <stdio.h>

// remove arr[i] whose index is the multiple of x over and over
// return the last removed value
int proc1(int * arr, int length, int x) {
	int i = 0; // array index
	int removedValue = 0;
	int count = 0; // global count
	int ordinal;  // start with 1 and remove the xth element 
	
	// end loop when remove the last value
	do {
	 	ordinal = 1;
		while(ordinal < x) {
			while(arr[i] == 0) {
				i = (i + 1) % length;
			}
			ordinal++;
			i = (i + 1) % length;
		}
		while(arr[i] == 0) {
			i = (i + 1) % length;
		}
		removedValue = arr[i];
		arr[i] = 0;
		count++;
	} while(count < length);
	return removedValue;
}

int main(void) {
	int x = 7;
	int length = 100;
	int i = 0;
	int arr[100];
	
	while(i < length) {
		arr[i] = i + 1;
		i++;
	}
	
	printf("%d", proc1(arr, length, x));
	return 0;
}
