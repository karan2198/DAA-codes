#include <Bits/stdc++.h>
#include <time.h>
using namespace std;

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    float time = 0;

    clock_t start, end;

    start = clock();
    bubbleSort(arr,n);
    end = clock();

    time = (float)(end - start);

       cout << "time required = " << time << endl;

    return 0;
}