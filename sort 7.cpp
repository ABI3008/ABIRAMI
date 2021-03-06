#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)
    	for (j = 0; j < n-i-1; j++) 
        	if (arr[j] > arr[j+1]) 
            	swap(&arr[j], &arr[j+1]); 
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
// Driver code 
int main() 
{ 
    int arr[] = { 5,88,48,24,10,67,92,15,36 }; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is \n";
    printArray(arr, n);
    bubbleSort(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}
