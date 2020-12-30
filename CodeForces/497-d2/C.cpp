#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int i, n, a[100100], b[100100], j, ans = 0;
	
	cin >> n;
	
	for(i = 0; i < n; i++)
		cin >> a[i];
		
	sort(a, a + n);
	
	for(i = 0; i < n; i++)
		b[i] = a[i];
		
	for(i = n - 1, j = n - 1; i >= 0; i--)
		if(b[j] > a[i])
			j--, ans++;
			
	cout << ans;
	
	return 0;
}
