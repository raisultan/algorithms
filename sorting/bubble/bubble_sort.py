#!/usr/bin/python3

from typing import List


def bubble_sort(lst: List[int]) -> List[int]:
	length = len(lst)
	for i in range(length):
		for j in range(i+1, length-1):
			if lst[i] > lst[j]:
				lst[i], lst[j] = lst[j], lst[i]

	return lst


if __name__ == '__main__':
	lst = [1, 4, 12, -7, 32, 46]
	sorted_lst = bubble_sort(lst)
