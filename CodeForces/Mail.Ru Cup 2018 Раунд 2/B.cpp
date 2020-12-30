
 #include <iostream>
using namespace std;

long long a[100001];

int main()
{
	int n,m,l;
	cin>>n>>m>>l;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>l) ans+=a[i-1]<=l;
	}
	int t,p,d;
	for(int i=1;i<=m;i++)
	{
		cin>>t;
		if(!t) cout<<ans<<"\n";
		else
		{
			cin>>p>>d;
			if(a[p]<=l&&a[p]+d>l) ans+=1-(a[p-1]>l)-(a[p+1]>l);
			a[p]+=d;
		}
	}
}
