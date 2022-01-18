#include<bits/stdc++.h>
using namespace std;
void printrepeating(int arr[],int size)
{
	int i,j;
	printf("Repeating elements: ");
	for(i=0;i<size-1;i++)
		for(j=i+1;j<size;j++)
		if(arr[i]==arr[j])
			cout<<arr[i]<<" ";
}
// Driver Code
int main()
{
	int arr[]={1,2,2,3,3,4,5,6,7,8,9};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	printrepeating(arr,arr_size);
}
