#include <iostream>
#include <ctime>

using namespace std;

namespace sortTest {

  int *generateRandomArray(int n, int rangeL, int rangeR) {

    int *arr = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
      arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;

    return arr;
  }

  void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }
}
