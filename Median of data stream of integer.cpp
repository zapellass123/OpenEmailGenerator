// This code is contributed by Rishabh Verma

#include <bits/stdc++.h>

using namespace std;

// Function to find position to insert current element of
// stream using binary search
int binarySearch(int arr[], int item, int low, int high)
{
	if (low >= high) {
		return (item > arr[low]) ? (low + 1) : low;
	}

	int mid = (low + high) / 2;

	if (item == arr[mid])
		return mid + 1;

	if (item > arr[mid])
		return binarySearch(arr, item, mid + 1, high);

	return binarySearch(arr, item, low, mid - 1);
}

// Function to print median of stream of integers
void printMedian(int arr[], int n)
{
	int i, j, pos, num;
	int count = 1;

	cout << "Median after reading 1"
		<< " element is " << arr[0] << "\n";

	for (i = 1; i < n; i++) {
		float median;
		j = i - 1;
		num = arr[i];

		// find position to insert current element in sorted
		// part of array
		pos = binarySearch(arr, num, 0, j);

		// move elements to right to create space to insert
		// the current element
		while (j >= pos) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = num;

		// increment count of sorted elements in array
		count++;

		// if odd number of integers are read from stream
		// then middle element in sorted order is median
		// else average of middle elements is median
		if (count % 2 != 0) {
			median = arr[count / 2];
		}
		else {
			median = (arr[(count / 2) - 1] + arr[count / 2])
					/ 2;
		}

		cout << "Median after reading " << i + 1
			<< " elements is " << median << "\n";
	}
}

// Driver Code
int main()
{
	int arr[] = { 5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printMedian(arr, n);

	return 0;
}
