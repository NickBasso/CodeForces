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
	
	int a[1010], i, ans = 0, n;
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
		cin >> a[i];
	
	sort(a + 1, a + n + 1);
	
	for(i = 2; i <= n; i++)
		ans += a[i] - a[i - 1] - 1;
	
	cout << ans;
	
	
	return 0;
}
