#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array, int lo, int hi) {
    int pivot = hi;

    while (lo < hi) {
        while (lo < hi && array[lo] <= array[pivot]) lo++;
        while (hi >= 0 && array[hi] > array[pivot]) hi--;
        if (lo < hi) swap(&array[lo], &array[hi]);
    }

    swap(&array[pivot], &array[hi]);
    return hi;
}

void quickSort(int *array, int lo, int hi) {
    if (lo >= hi) return;
    int pIndex = partition(array, lo, hi);
    quickSort(array, lo, pIndex - 1);
    quickSort(array, pIndex + 1, hi);
}

void main() {
	int array[] = {26, 27, 42, 10, 14, 42, 33, 44, 35, 17};
	int length = sizeof(array) / sizeof(int);

	quickSort(array, 0, length - 1);
}
