#include <stdio.h>

void bubbleSort(int *array, int length) {
	for(int i = 0; i < length; i++){
		for(int j = i+1; j < length; j++){
			if(array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void main() {
	int array[] = {4, 5, 6, 1, 78, 12, -12, 32};
	int length = sizeof(array) / sizeof(int);

	bubbleSort(array, length);
}
