#include "BubbleSort.h"

void BubbleSort::swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void BubbleSort::bubbleSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int y = 0; y < size - 1; y++) {
			if (arr[i] > arr[y])
				swap(arr[i], arr[y]);
		}
	}
}