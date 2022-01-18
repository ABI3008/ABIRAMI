#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) 
    {
        if (arr[j] < pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}
void quicksort(int arr[], int low, int high) 
{ 
    if (low < high) 
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 
    } 
}
void printarray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
// Driver Code
int main() 
{ 
    int arr[] = { 5,88,48,24,10,67,92,15,36 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is \n";
    printarray(arr, n);
    quicksort(arr, 0, n - 1); 
    cout << "Sorted array: \n"; 
    printarray(arr, n); 
    return 0; 
}
