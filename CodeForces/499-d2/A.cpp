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
	
	int n, k, i, ans = 0;
	char a[60] = {0}, l;
	
	cin >> n >> k;
	
	cin >> a;
		
	sort(a, a + n);
	
	k--, ans += a[0] - 'a' + 1, l = a[0];
	
	for(i = 1; i < n && k > 0; i++)
		if(a[i] - l >= 2){
			ans += a[i] - 'a' + 1;
			l = a[i];
			k--;
		}
	
	if(k > 0)
		cout << "-1";
	else
		cout << ans;
	
	return 0;
}
