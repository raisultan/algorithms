#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array, int lo, int hi, int pivot) {
	while(1) {
		printf("\n");
		for(int i = 0; i < pivot; i++) {
			printf("%d ", array[i]);
		}
		printf("\n");

		// partitioning implementation
		// find new lo
		while(array[lo] < array[pivot-1]) lo++;

		// find new hi
		while(hi >= 0 && array[hi] > array[pivot-1]) hi--;

		printf("Lo: %d, Hi: %d\n", array[lo], array[hi]);
		if(lo < hi)	swap(&array[lo], &array[hi]);
		else {
			swap(&array[lo], &array[pivot-1]);
			break;
		}
	}
	printf("\n");

	return lo;
}

void quickSort(int *array, int lo, int hi) {
	if(lo-hi <= 0) return;
	else {
		int pivot = array[hi];
		int pIndex = partition(array, lo, hi, pivot);
		quickSort(array, lo, pIndex-1);
		quickSort(array, pIndex+1, hi);
	}
}

void main() {
	int array[] = {26, 27, 42, 10, 14, 42, 33, 44, 35, 17};
	int length = sizeof(array) / sizeof(int);

	int lo = 0;
	int hi = length - 2; // 35
	int pivot = length - 1;

	int i = partition(array, lo, hi, length);
	partition(array, lo, i, i+1);

	quickSort(array, 0, length-1);

	for(int i = 0; i < length; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
