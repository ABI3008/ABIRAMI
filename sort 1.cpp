#include <iostream>
using namespace std;
void merge(int array[], int const left, int const mid, int const right)
{
    int const subarrayone = mid - left + 1;
    int const subarraytwo = right - mid;
    int *leftarray = new int[subarrayone],
         *rightarray = new int[subarraytwo];
    for (int i = 0; i < subarrayone; i++)
        leftarray[i] = array[left + i];
    for (int j = 0; j < subarraytwo; j++)
        rightarray[j] = array[mid + 1 + j];
    int indexofsubarrayone = 0,
        indexofsubarraytwo = 0;
    int indexofmergedarray = left;
    while (indexofsubarrayone < subarrayone && indexofsubarraytwo < subarraytwo)
	{
        if (leftarray[indexofsubarrayone] <= rightarray[indexofsubarraytwo])
		{
            array[indexofmergedarray] = leftarray[indexofsubarrayone];
            indexofsubarrayone++;
        }
        else
		{
            array[indexofmergedarray] = rightarray[indexofsubarraytwo];
            indexofsubarraytwo++;
        }
        indexofmergedarray++;
    }
    while (indexofsubarrayone < subarrayone)
	{
        array[indexofmergedarray] = leftarray[indexofsubarrayone];
        indexofsubarrayone++;
        indexofmergedarray++;
    }
    while (indexofsubarraytwo < subarraytwo)
	{
        array[indexofmergedarray] = rightarray[indexofsubarraytwo];
        indexofsubarraytwo++;
        indexofmergedarray++;
    }
}
void mergesort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    mergesort(array, begin, mid);
    mergesort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}
// Driver code
int main()
{
    int arr[] = { 5,88,48,24,10,67,92,15,36 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is \n";
    printarray(arr, arr_size);
    mergesort(arr, 0, arr_size - 1);
    cout << "\nSorted array is \n";
    printarray(arr, arr_size);
    return 0;
}
