#include <bits/stdc++.h>
using namespace std;
class pairsum {
public:
	int first;
	int sec;
	int sum;
};
int compare(const void* a, const void* b)
{
	return ((*(pairsum*)a).sum - (*(pairsum*)b).sum);
}
bool nocommon(pairsum a,pairsum b)
{
	if(a.first==b.first||a.first==b.sec||a.sec==b.first||a.sec==b.sec)
		return false;
	return true;
}
void findfourelements(int arr[],int n,int x)
{
	int i,j;
	int size=(n*(n-1))/2;
	pairsum aux[size];
	int k=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			aux[k].sum=arr[i]+arr[j];
			aux[k].first=i;
			aux[k].sec=j;
			k++;
		}
	}
	qsort(aux,size,sizeof(aux[0]),compare);
	i=0;
	j=size-1;
	while(i<size&&j>=0)
	{
		if((aux[i].sum+aux[j].sum==x)&&nocommon(aux[i],aux[j]))
		{
			cout<<arr[aux[i].first]<<", "<<arr[aux[i].sec]<<", "<<arr[aux[j].first]<<", "<<arr[aux[j].sec]<<endl;
			return;
		}
		else if (aux[i].sum + aux[j].sum < x)
			i++;
		else
			j--;
	}
}
// Driver code
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=13;
	findfourelements(arr,n,x);
	return 0;
}
