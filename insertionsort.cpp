#include<bits/stdc++.h>
#include <time.h>
using namespace std;

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main()
{
	long int n;
	cin>>n;
	int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand();
    }

    clock_t start,end;
    start = clock();
	insertionSort(array,n);
    end = clock();
    long int time = (double)(end - start);
    cout<<time;

    return 0;
}

