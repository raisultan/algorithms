package main

import "fmt"

func bubbleSort(source []int) []int {
	length := len(source)
	for i := 0; i < length; i ++ {
		for j := i+1; j < length-1; j ++ {
			if source[i] > source[j] {
				source[i], source[j] = source[j], source[i]
			}
		}
	}

	return source
}

func main() {
	source := []int{2, 7, 0, 12, -38}

	sortedArray := BubbleSort(source)
}
