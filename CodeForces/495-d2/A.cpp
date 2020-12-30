#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, dis, i, j, ans = 2, a[110] = {0}, d[110] = {0};
	
	cin >> n >> dis;
	
	for(i = 1; i <= n; i++)
		cin >> a[i];
		
	sort(a + 1, a + n + 1);
		
	for(i = 2; i <= n; i++)
		d[i] = a[i] - a[i - 1];
		
	for(i = 1; i <= n; i++){		
		if(d[i] - dis >= dis)
			ans++;
			
		if(d[i + 1] - dis > dis)
			ans++;
	}
		
	cout << ans;
	
	return 0;
}
