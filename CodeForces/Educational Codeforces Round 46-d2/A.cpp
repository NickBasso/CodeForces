#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, ans = 0;
	string s;
	vector < string > a, b;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> s;
		
		a.pb(s);
	}
	
	for(i = 0; i < n; i++){
		cin >> s;
		
		b.pb(s);
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	if(a == b){
		cout << "0";
		return 0;
	}
	
	/*for(i = 0; i < n; i++){
		cout << a[i] << "\n";
	}
	
	cout << "\n\n";
	
	for(i = 0; i < n; i++){
		cout << b[i] << "\n";
	}
	
	cout << "\n\n";*/
	
	for(i = 0; i < n; i++)
		for(j = 0; j < a[i].length(); j++)
			if(a[i][j] != b[i][j])
				ans++;
		
	cout << ans;
	
	return 0;
}
