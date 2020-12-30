#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, m, i, j, ans = 0, a[1001], c[1001];
	
	cin >> n >> m;
	
	for(i = 0; i < n; i++)
		cin >> c[i];
		
	for(i = 0; i < m; i++)
		cin >> a[i];
		
	i = j = 0;
	
	while(j < m && i < n){
		if(a[j] >= c[i])
			ans++, j++;
		
		i++;
	}
		
	cout << ans;
	
	return 0;
}
