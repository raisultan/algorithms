package main

func partition(array []int, lo int, hi int) int {
	pivot := hi

	for lo < hi {
		for lo < hi && array[lo] <= array[pivot] {
			lo++
		}
		for hi >= 0 && array[hi] > array[pivot] {
			hi--
		}
		if lo < hi {
			array[lo], array[hi] = array[hi], array[lo]
		}
	}

	array[pivot], array[hi] = array[hi], array[pivot]
	return hi
}

func quickSort(array []int, lo int, hi int) {
	if lo >= hi {
		return
	}
	pIndex := partition(array, lo, hi)
	quickSort(array, lo, pIndex-1)
	quickSort(array, pIndex+1, hi)
}

func main() {
	source := []int{26, 27, 42, 10, 14, 42, 33, 44, 35, 17}
	quickSort(source, 0, len(source)-1)
}
