// C program to find K'th smallest element
#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

// Function to return K'th smallest
// element in a given array
int kthSmallest(int arr[], int N, int K)
{
	// Sort the given array
	qsort(arr, N, sizeof(int), cmpfunc);

	// Return k'th element in the sorted array
	return arr[K - 1];
}

// Driver's code
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]), K = 2;

	// Function call
	printf("K'th smallest element is %d",
		kthSmallest(arr, N, K));
	return 0;
}

