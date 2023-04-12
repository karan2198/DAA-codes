#include<bits/stdc++.h>
#include <time.h>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start =0;
    int end = size-1;

    int mid = (start+end)/2;
   
   while(start <= end)
   {
    if(arr[mid] == key)
        return mid;

        if(key > arr[mid])
        start= mid + 1;

        else 
        end = mid - 1;

        mid = (start + end)/2 ;

   }

   return -1 ;

}

int main()
{
	
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    clock_t start,end;
    start = clock();
	int evenindex = binarysearch(even , 6 , 18);
    end = clock();
    long int time = (double)(end - start);
    cout<<time;

    return 0;
}

