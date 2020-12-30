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
	
	int i,j,r,n,a,b,u[101][101]={0},ans=0;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>r;
		
		for(j=0;j<r;j++){
			cin>>a;
			u[i+1][a]=1;
		}
	}
	
	for(i=1;i<=100;i++){
		int k = 0;
		
		for(j=1;j<=100;j++)
			if(u[j][i])
				k++;
				
		if(k==n)
			cout<<i<<" ";
	}
	
	return 0;
}
