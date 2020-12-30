#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	
	int a[200010], n, s, i, j, ans;
	
	cin >> n >> s;
	
	for(int i = 1; i <= n; i++)
		cin >> a[i];
		
	sort(a + 1, a + n + 1);
	
	int m = (n + 1) / 2;
	
	ans += abs(s - a[m]);
	
	if(s > a[m]){
		a[m] += ans;
		
		if(a[m] > a[m + 1]){
			ans += (a[m] - a[m + 1]);
		}
	}
	else if(s < a[m]){
		a[m] -= ans;
		
		if(a[m] < a[m - 1]){
			ans += (a[m - 1] - a[m]);
		}
	}
	
	cout << ans;
	
	return 0;
}
