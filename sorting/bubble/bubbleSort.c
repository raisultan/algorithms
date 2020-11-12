#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *bubbleSort(int *source, int length) {
	int *array = malloc(length * sizeof(int));
	memcpy(array, source, length * sizeof(int));

	for(int i = 0; i < length; i++){
		for(int j = i+1; j < length; j++){
			if(array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	return array;
}

void main() {
	int array[] = {4, 5, 6, 1, 78, 12, -12, 32};
	int length = sizeof(array) / sizeof(int);

	int *sortedArray = bubbleSort(array, length);
	for(int i = 0; i < length; i++) {
		printf("%d\n", sortedArray[i]);
	}
}
