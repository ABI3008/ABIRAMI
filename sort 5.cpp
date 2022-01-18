#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}
void printarray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
}
/* Driver code */
int main() 
{ 
    int arr[] = { 5,88,48,24,10,67,92,15,36 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Given array is \n";
    printarray(arr, n);
    insertionsort(arr, n);
	cout<<"\nSorted array is \n";
    printarray(arr, n); 
    return 0; 
}
