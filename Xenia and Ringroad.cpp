#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	long long a,b,c,d;
	while(cin>>a>>b)
	{
		long long ar[a];
		long long cont=0;
		d=1;
		for(long long i=0;i<b;i++)
		{
			cin>>c;
			if(d>c)
			{
				cont+=abs(a-d)+1;
				d=1;
			}
			cont+=abs(d-c);
			d=c;
		}
		cout<<cont<<endl;
	}
}