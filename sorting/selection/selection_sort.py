#!/usr/bin/python3

from typing import List


def selection_sort(lst: List[int]) -> List[int]:
	length = len(lst)

	for i in range(length):
		min_pos = i

		for j in range(i+1, length):
			if lst[j] < lst[min_pos]:
				min_pos = j

		lst[i], lst[min_pos] = lst[min_pos], lst[i]

	return lst



if __name__ == '__main__':
	lst = [5, 1, 132, 90, -12, 5, 1, 0, -2, 5]
	
	sorted_lst = selection_sort(lst);
