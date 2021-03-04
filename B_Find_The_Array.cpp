
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a;
			b=1;
			while(b<=a)
			{
				b*=2;
			}
			cout<<b/2<<" ";
		}
		cout<<"\n";
	}
}