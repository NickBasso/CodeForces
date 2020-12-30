#include <bits/stdc++.h>

using namespace std;

int n,M,i,f,y,t,a[179000],b[179000];

int main(){
	freopen("input.txt", "r", stdin);
	
	cin >> n >> M;
	
	cin >> a[0], b[0] = a[0];
	
	for(f = 0, i = 1; i < n; i++){
		cin >> a[i];
		
		b[i] += b[i - 1] + f * (a[i] - a[i - 1]);
		f = 1 - f;
	}
		
	for(y = t = b[i - 1] + f * (M - a[n - 1]), i = 0; i < n; i++)
		y = max(y, b[i] + M - a[i] - (t - b[i]) - 1);
		
	cout << y;
	
	return 0;
}

4 5 6 7
