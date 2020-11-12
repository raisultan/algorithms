#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *selectionSort(int *source, int length) {
	int *array = malloc(length * sizeof(int));
	memcpy(array, source, length * sizeof(int));

	int switchPos = 0;
	for(int i = 0; i < length; i++) {
		int minPos = i;

		for(int j = i+1; j < length; j++) {
			if(array[j] < array[minPos]) {
				minPos = j;
			}
		}

		int temp = array[minPos];
		array[minPos] = array[switchPos];
		array[switchPos] = temp;

		switchPos++;
	}

	return array;
}

void main() {
	int array[] = {5, 1, -7, 121, 39, 43};
	int length = sizeof(array) / sizeof(int);

	int *sortedArray = selectionSort(array, length);
}
