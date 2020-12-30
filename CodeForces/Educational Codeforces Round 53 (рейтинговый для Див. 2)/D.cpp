#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	long long n, t, a[200010] = {0}, sm = 0, ans = 0, c, lm;
	
	cin >> n >> t;
		
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		
		sm += a[i];
	}
	
	if(t >= sm){
		c = t / sm;
		t -= (c * sm);
		ans += (n * c);
	}
	
	lm = t;
	
	while(true){
		lm = t;
		for(int i = 1; i <= n; i++){
			if(t >= a[i]){
				t -= a[i];
				ans++;
			}
		}
		
		if(lm == t)
			break;
	}
	
	
	cout << ans;
	
	return 0;
}
