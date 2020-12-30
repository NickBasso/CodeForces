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
	
	long long n, k, i, j, mx = 0, mn = 1e9, ch, cc, ans = 0;
	map <long long, long long> h;
	
	for(int i = 0; i < 200001; i++)
		h[i] = 0;
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> j;
		h[j]++;
		
		if(j > mx)
			mx = j;
			
		if(j < mn)
			mn = j;
	}
	
	ch = mx;
	cc = k;
	
	while(ch > mn && h[ch + 1] + h[ch] <= cc){
			cc -= (h[ch] + h[ch + 1]);
			ch--;
			h[ch] += h[ch + 1];
			ans++;
	}
	
	cout << ans;
	
	return 0;
}
