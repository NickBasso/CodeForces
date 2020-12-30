#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	
	int n, i, l=-1, ans=0;	
				
				cin>>n;
				
				vector< pair<int, int> > v;
				
				v.resize(n);
				
				for(i=0; i<n; i++)
					cin>>v[i].second>>v[i].first;
				
				sort(v.begin(),v.end());
				
				for(i=0; i<n; i++)
				{
					if(v[i].second>l)
					{
						l=v[i].first;
						ans++;
					}		
				}
				
				cout<<ans;
				
				return 0;
	
	
	
	
	
	return 0;
}
