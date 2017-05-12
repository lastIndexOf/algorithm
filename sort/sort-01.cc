/**
*	选择排序
*/

#include <iostream>

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
	int arr[5] = {5, 4, 3, 2, 1};
	selectSort(arr, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	float arr2[5] = {5.2, 4.1, 3.3, 2.5, 1.1};
	selectSort(arr2, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << " ";
	}

	cout << endl;
	return 0;
}
