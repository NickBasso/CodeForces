#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

const int S = 2e5 + 10;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, a[S], c[S] = {0}, p = 1, mxp = 0, d;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> a[i];
		c[a[i]] = i;
	}
		
	for(i = 1; i <= n; i++){
		cin >> d;
		
		if(mxp >= c[d]){
			cout << "0 ";
		}	
		else{
			cout << c[d] - mxp << " ";
			mxp = c[d];
		}
	}
		
	return 0;
}
