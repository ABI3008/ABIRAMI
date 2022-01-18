#include <bits/stdc++.h>
using namespace std;
void printTwoOdd(int arr[], int size)
{
	int xor2 = arr[0]; 
	int set_bit_no;
	int i;
	int n = size - 2;
	int x = 0, y = 0;
	for(i = 1; i < size; i++)
		xor2 = xor2 ^ arr[i];
	set_bit_no = xor2 & ~(xor2-1);
	for(i = 0; i < size; i++)
	{
		if(arr[i] & set_bit_no)
		x = x ^ arr[i];
		else
		y = y ^ arr[i];
	}
	cout << "The two odd elements: " << x << " & " << y;
}
/* Driver code */
int main()
{
	int arr[] = {4, 2, 4, 5, 2, 1, 3, 3};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	printTwoOdd(arr, arr_size);
	return -1;
}
