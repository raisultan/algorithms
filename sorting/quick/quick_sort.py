#!/usr/bin/python3

from typing import List


def partition(array: List[int], lo: int, hi: int) -> int:
	pivot = hi

	while lo < hi:
		while lo < hi and array[lo] <= array[pivot]:
			lo += 1
		while hi >= 0 and array[hi] > array[pivot]:
			hi -= 1

		if lo < hi:
			array[lo], array[hi] = array[hi], array[lo]

	array[pivot], array[hi] = array[hi], array[pivot]
	return hi


def quick_sort(array: List[int], lo: int, hi: int):
	if lo >= hi:
		return

	pindex = partition(array, lo, hi)
	quick_sort(array, lo, pindex-1)
	quick_sort(array, pindex+1, hi)


if __name__ == '__main__':
	source = [26, 27, 42, 10, 14, 42, 33, 44, 35, 17]
	quick_sort(source, 0, len(source)-1)
