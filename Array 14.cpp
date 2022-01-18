#include <bits/stdc++.h>
using namespace std;
#define r 5
#define c 5
int row_with_max_1(bool mat[r][c]) 
{
	int rowindex=-1;
	int maxcount=0;
	for(int i=0;i<r;i++)
	{
		int count=0;
		for(int j=0;j<c;j++)
		{
			if(mat[i][j]==1)
			{
				count++;
			}
		}
		if(count>maxcount)
		{
			maxcount=count;
			rowindex=i;
		}
	}
	return rowindex;
}
// Driver Code //
int main()
{
	bool mat[r][c]={{0,0,0,1,1},{0,1,1,1,0},{0,0,0,0,1},{1,1,1,1,0},{1,0,1,1,1}};
	cout<<"Index of row with max '1' is "<<row_with_max_1(mat);
	return 0;
}
