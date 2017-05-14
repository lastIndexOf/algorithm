/**
*	选择排序
*/

#include <iostream>
#include "sortTest.h"

using namespace std;

template <typename T>
void selectSort(T arr[], int n)
{
	for (int i = 0; i < n; i++) {
		int minIndex = i;

		for (int t = i; t < n; t++)
			if (arr[t] < arr[minIndex])
				minIndex = t;

		swap(arr[i], arr[minIndex]);
	}
}

int main()
{
	int n = 10000;

	int *arr = sortTest::generateRandomArray(n, 0, n);
	selectSort(arr, n);

	sortTest::printArr(arr, n);

	cout << endl;

	delete[] arr;
	return 0;
}
