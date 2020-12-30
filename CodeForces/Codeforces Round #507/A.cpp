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
	
	int n, a, b, i, j, ar[21], ans = 0, cp; 	// cp - cheapest
	
	cin >> n >> a >> b;
	
	cp = min(a, b);
	
	for(i = 1; i <= n; i++)
		cin >> ar[i];
		
	i = 1, j = n;
	
	while(i < j){
		if(ar[i] == ar[j] && ar[i] == 2){
			ans += 2 * cp;
		}
		else if(ar[i] != ar[j]){
			if(ar[i] != 2 && ar[j] != 2){
				cout << "-1";
				return 0;
			}
			else if(ar[i] == 2){
				if(ar[j] == 0)
					ans += a;
				else
					ans += b;
			}
			else if(ar[j] == 2){
				if(ar[i] == 0)
					ans += a;
				else
					ans += b;
			}
		}
		
		i++, j--;
	}
	
	if(n % 2 && ar[i] == 2)
		ans += cp;
	
	cout << ans << endl;
		
	return 0;
}
