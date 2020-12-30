#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n,i,j,a[100005],mn=-1e9;
	
	cin>>n;
	
	i=0;
	
	while(cin>>a[i++])
		1;
	
	sort(a,a+n);
	
	if(n==2){
		cout<<0;
		return 0;
	}
	
	int x=a[1]-a[0];
	int y=a[n-1]-a[n-2];
	
	if(x<y){
		mn=a[n-2]-a[0];
	}
	else{	
		mn=a[n-1]-a[1];
	}
	
	cout<<mn;
	
	
	return 0;
}
