#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, m, i, j, p, ans = 0, t;
	long long pl = 0, ms = 0, ls = 2e9, us = 0, posl, posu, c = 0;
	
	vector < int > a;
	
	cin >> n >> m;
	
	for(i = 1; i <= n; i++){
		cin >> t;
		
		a.pb(t);
	}
		
	a.pb(0);
	a.pb(m);
	
	sort(a.begin(), a.end());
		
	for(i = 0; i <= n; i++){
		if(i % 2 == 0){
			pl += a[i + 1] - a[i];	
		}	
		else{
			ms += a[i + 1] - a[i];
		}	
	}
	
	i = 0;
	
	while(a[i + 1] - a[i] < 2 && i <= n)
		i++;
	
	a.pb(i);

	sort(a.begin(), a.end());
	
	for(i = 0; i <= n + 1; i++)
		if(i % 2 == 0)
			c += a[i + 1] - a[i];	

	if(pl > c)
		cout << pl;
	else
		cout << c;	
	
	return 0;
}
