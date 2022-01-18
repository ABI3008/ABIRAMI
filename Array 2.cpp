#include<bits/stdc++.h>
using namespace std;
int getOddOccurrence(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		int count = 0;
		for (int j = 0; j <n; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if (count % 2 != 0)
			return arr[i];
	}
	return -1;
}
// driver code
int main()
{
	int arr[] = { 2,3,3,5,4,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	// Function calling
	cout <<"No. of odd occurrence: " << getOddOccurrence(arr, n);
	return 0;
}
