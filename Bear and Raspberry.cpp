#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	int a,b;
	while(cin>>a>>b)
	{
		int ar[a];
		for(int i=0;i<a;i++)
		{
			cin>>ar[i];
		}
		int mm=0;
		for(int i=0;i<a-1;i++)
		{
			mm=max(mm,ar[i]-ar[i+1]);
		}
		cout<<max(0,mm-b)<<endl;
	}
}