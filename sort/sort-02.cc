/**
*	插入排序
*/

#include <iostream>
#include "sortTest.h"

using namespace std;

void insertSort(int arr[], int n);

int main() {

  int n = 10000;
  int *arr = sortTest::generateRandomArray(n, 0, n);

  insertSort(arr, n);
  sortTest::printArr(arr, n);

  delete[] arr;
  return 0;
}

void insertSort(int arr[], int n) {

  for (int i = 0; i < n; i++) {

    int e = arr[i];
    int j;
    for (j = i; j > 0 && arr[j - 1] > e; j--) {
      arr[j] = arr[j - 1];
    }
    arr[j] = e;
  }
}
