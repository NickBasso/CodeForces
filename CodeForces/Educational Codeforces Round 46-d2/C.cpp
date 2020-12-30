#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, k, a[200010] = {0}, b[100010] = {0}, f, t, cc = 0;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> f >> t;
		
		for(k = f; k <= t; k++)
			b[k]++;
	}
		
	for(i = 1; i <= n; i++, cc = 0){
		for(j = 0; j <= 100000; j++)
			if(b[j] == i)
				cc++;
		
		cout << cc << " ";
	}
	
	return 0;
}
