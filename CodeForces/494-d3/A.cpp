#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, a[110] = {0}, i, ans = 0, x;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> x;
		
		a[x]++;
	}
	
	for(i = 1; i <= 100; i++)
		if(a[i] > ans)
			ans = a[i];
			
	cout << ans;
	
	return 0;
}
