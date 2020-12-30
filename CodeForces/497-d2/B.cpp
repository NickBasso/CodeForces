#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, w, h, t, a[100010], b[100010], mxa, mxb;
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
		
	if(a[1] < b[1]){
		t = a[1];
		a[1] = b[1];
		b[1] = t;
	}
		
	for(i = 2; i <= n; i++){
		if(a[i] < b[i]){
			t = a[i];
			a[i] = b[i];
			b[i] = t;
		}
		
		if(a[i] <= a[i - 1])
			1;
		else if(b[i] <= a[i - 1]){
			t = a[i];
			a[i] = b[i];
			b[i] = t;
		}
		else goto m;
	}
	
	cout << "YES";
	
	/*for(i = 1; i <= n; i++)
		cout << a[i] << "   " << b[i] << "\n";*/
	
	return 0;
	
	m: cout << "NO";
	
	return 0;
}
