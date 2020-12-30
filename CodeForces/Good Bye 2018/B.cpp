#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

const int N=1e6+10;
const int M=1e3+10;

typedef long long ll;

using namespace std;

int n, x[N], y[N], i, j, k, a[N], b[N], rx[2][M], ry[2][M];

int main(){
	//freopen("input.txt", "r", stdin);

	cin >> n;
	
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i];	
		
		if(n==1){
			cout<<x[0]+a[0]<<" "<<y[0]+b[0];
			return 0;
		}	
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			rx[i][j]=x[i]+a[j];
			ry[i][j]=y[i]+b[j];
		}
	}
	
	if(n==2){
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(rx[0][i]==rx[1][j] && ry[0][i]==ry[1][j]){
				cout<<rx[0][i]<<" "<<ry[0][i];
				return 0;
			}
	}
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				if(rx[0][i]==rx[1][j]&&ry[0][i]==ry[1][j]&&rx[0][i]==rx[2][k]&&ry[0][i]==ry[2][k]){
					cout<<rx[0][i]<<" "<<ry[0][i];
					return 0;
				}
	
		
	
	return 0;
}
