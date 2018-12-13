/*
 *	Made by: Hofmans Daan
 *	2018/11/29
 *	Lab Assignment #10
 */
#include <stdio.h>
#include <stdlib.h>

 /*
	 Modify the function BubbleSort() so it terminates after a pass in which no two elements are interchanged.
  */

// Fancy prints an array
void PrintArray(int* array, int size)
{
	printf("array[%d] = {", size);
	for (int i = 0; i < size; i++)
	{
		if ((i + 1) != size)
			printf("%d, ", array[i]);
		else
			printf("%d}\n", array[i]);
	}
}

// Swaps the values of x and y
void BubbleSwap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(int* arr, int size)
{
	int unsorted_size = size;

	// Loop untill there are less than two unsorted items left
	while (unsorted_size > 1)
	{
		int swapped = 0;

		// Run through the array and swap items that are in the wrong order
		for (int i = 0; i < (unsorted_size - 1); i++)
		{

			// Switch if first item is smaller than second item
			if (arr[i] > arr[i + 1])
			{
				BubbleSwap(&arr[i], &arr[i + 1]);
				swapped = 1;
			}
		}

		if (!swapped)
		{
			printf("Didnt swap numbers, halting sort...\n");
			return; // Or break
		}

		// The last number is the biggest now, reduce size of array to sort.
		unsorted_size--;
	}
}

void Lab10_Exercise1()
{
	// Initialize array to sort
	printf("Enter array size: ");
	int size;
	scanf_s("%d", &size);

	// Resize the array to input size with integers.
	int *arr = (int *)malloc(size * sizeof(int));

	printf("Enter data for array:\n");
	for (int i = 0; i < size; i++)
	{
		printf("Element %d/%d = ", i + 1, size);
		if (scanf_s("%d", &arr[i]) != 1)
		{
			printf("Bad read, try again");
			i--;
			continue;
		}
	}

	// before
	printf("Input: ");
	PrintArray(arr, size);

	// sort
	printf("Sorting...\n");
	BubbleSort(arr, size);

	// after
	printf("Sorted ");
	PrintArray(arr, size);

	// Toss the array to free memory because we malloc'd
	free(arr);
}
