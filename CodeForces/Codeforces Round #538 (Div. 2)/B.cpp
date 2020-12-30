#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

const int N = 200050;

long long a[N], b[N];

map < int, int > mp;

int main(){
	//freopen("input.txt", "r", stdin);
	
	long long n, m, k, i, j, ans = 0;
	
	cin >> n >> m >> k;
	
	for(i = 1; i <= n; i++){
		cin >> a[i];
		
		b[i] = a[i];
	}
	
	sort(b + 1, b + n + 1);
	
	//vector < int > s;
	map < int, int > mp;
	set < int > ms;
	
	for(i = n; i > n - (m * k); i--){
		ans += b[i];
		ms.insert(b[i]);
		
		if(mp.count(b[i]) == 0){
			mp[b[i]] = 1;
		}
		else{
			mp[b[i]]++;
		}
	}
	
	/*for(auto x : s)
		cout << x << " ";
	cout << "\n\n";*/	
	
	i = 1, j = 0;
	int p = 0;
	
	cout << ans << "\n";
	
	while(p < k - 1 && i <= n){
		if(j < m && ms.count(a[i]) && mp[a[i]] > 0){
			mp[a[i]]--;
			j++;
		}
		
		if(j == m){
			cout << i << " ";
			j = 0;
			p++;
		}
		
		i++;
	}
	
	return 0;
}
