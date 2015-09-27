#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,int> iii;
int  maxx=1000000;
int  n,m,x,y;
vector<ii> mu[20001];
bool mumu[20001];
int t,l,ll,lll;
void func(int  j,int  k)
{
	if(mumu[j])return;
	else mumu[j]=1;
	if(j==y&&k<maxx)maxx=k;
	if(k>maxx){mumu[j]=0;return;}
	for(int  i=0;i<mu[j].size();i++)
	{
		func(mu[j][i].first,mu[j][i].second+k);
	}
	mumu[j]=0;
}
int main(){
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int  a;
	scanf("%d",&a);
	for(int ccc=1;ccc<=a;ccc++)
	{
		maxx=1000000;
		scanf("%d %d %d %d",&n,&m,&x,&y);
		//cin>>n>>m>>x>>y;
		
		for(int  i=0;i<=n;i++)
		{
			mu[i].clear();
		}
		for(int  i=0;i<=n;i++)
		{
			mu[i].push_back(ii(i,i));
		}
		
		for(int  i=0;i<m;i++)
		{
			scanf("%d %d %d ",&l,&ll,&lll);
			mu[l].push_back(ii(ll,lll));
			mu[ll].push_back(ii(l,lll));
		}

		for(int  i=0;i<mu[x].size();i++)
		{
			func(mu[x][i].first,mu[x][i].second);
			//memset(mumu,false,sizeof(mumu));
		}
		printf("Case #%d: ",ccc);
		//cout<<"Case #"<<ccc<<": ";
		if(maxx==1000000)printf("unreachable\n");
		else printf("%d\n",maxx);
	}
	return 0;
}