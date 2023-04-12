#include <Bits/stdc++.h>
#include <time.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_ind;
    for (i = 0; i < n - 1; i++)
    {
        min_ind = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
        }

        swap(&arr[min_ind], &arr[i]);
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
    selectionSort(arr, n);
    end = clock();

    time = (float)(end - start);

       cout << "time required = " << time << endl;

    return 0;
}