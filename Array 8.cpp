#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int a=0;a<=n;a++)
    {
    	for(int b=0;b<=n;b++)
    	{
    		for(int c=0;c<=n;c++)
    		{
    			if((c*c==((a*a)+(b*b)))&&(a<c)&&(b<c))
    			{
    				cout<<"pythagorean triplets are..."<<a<<" "<<b<<" "<<c<<endl;
				}
			}
		}
	}
    return 0;
}
