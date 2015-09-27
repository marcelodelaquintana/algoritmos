#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("input.txt","r",stdin);
	int a,b;
	while(cin>>a>>b)
	{
		string c;
		cin>>c;
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<a-1;j++)
			{
				if(c[j]=='B' and c[j+1]=='G')
				{
					swap(c[j],c[j+1]);
					j++;}
				}
			}
			cout<<c<<endl;
		}
		return 0;
	}