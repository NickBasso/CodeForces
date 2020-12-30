#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int n, k, a[33];
deque <int>d;

void dfs(int x, int sum, int c){
	if(c==k && sum==n){
		cout << "YES\n";
		
		for(int i=0;i<d.size();i++)
			cout<<d[i]<<" ";
			
		exit(0);
	}
	
	for(int i=29;i>=0&&c<k&&sum<n;i--){
		if(sum+a[i]<=n && (n-sum-a[i])<400000000){
			d.push_back(a[i]);
			dfs(i, sum+a[i],c+1);
			d.pop_back();
		}		
	} 
}

int main(){
	//freopen("input.txt", "r", stdin);
	
	cin>>n>>k;
	
	a[0]=1;
	
	for(int i=1;i<50;i++){
		a[i]=1;
		
		for(int j=0;j<i;j++)
			a[i]*=2;
	}
		
	
	for(int i=0;i<32;i++)
		cout<<a[i]<<" "<<"\n";
		
	cout<<"\n\n";
	
	if(n < k){
		cout <<"NO";
		return 0;
	}
	
	if(n==k){
		cout<<"YES\n";
		for(int i=1;i<=n;i++)
			cout<<1<<" ";
	}
	
	dfs(30, 0, 0);
	
	cout << "NO";
	
	return 0;
}
