#include <bits/stdc++.h>
using namespace std;
char mat[102][102]={'o'};
int mm[102][102]={0};
int main()
{
	//freopen("input.txt","r",stdin);
	int a;
	bool bbb;
	while(cin>>a)
	{
		bbb=1;
				for(int i=0;i<=a;i++)
		{
			for(int j=0;j<=a;j++)
			{
				mm[i][j]=0;
			}
		}
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=a;j++)
			{
				cin>>mat[i][j];
				if(mat[i][j]=='o')mm[i][j]++;
			}
		}
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=a;j++)
			{
				if((mm[i][j-1]+mm[i][j+1]+mm[i-1][j]+mm[i+1][j])%2==1)
				{
					bbb=0;
					goto gnu;
				}
			}
		}
		gnu:;
		if(bbb)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}