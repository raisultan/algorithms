package main

import "fmt"

func selectionSort(source []int) []int {
	length := len(source)
	for i := 0; i < length; i ++ {
		minPos := i

		for j := i+1; j < length; j ++ {
			if source[j] < source[minPos] {
				minPos = j
			}
		}

		source[minPos], source[i] = source[i], source[minPos]
	}

	return source
}

func main() {
	source := []int{2, 7, 0, 12, -38, 0, 12, 31, 5, 5}

	sortedArray := selectionSort(source)
}
