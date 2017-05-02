/**
*	选择排序
*/

#include <iostream>

using namespace std;

void selectSort(int arr[], int n)
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
	int arr[5] = {5, 4, 3, 2, 1};
	selectSort(arr, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}
