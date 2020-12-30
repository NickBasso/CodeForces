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
	
	int cc = 1, n, i, ans = 1, a[200010];
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
		cin >> a[i];
		
	for(i = 2; i <= n; i++){
		if(a[i] <= a[i - 1] * 2){
			cc++;
			ans < cc ? ans = cc : false;
		}
		else{
			ans < cc ? ans = cc : false;
			cc = 1;
		}
	}
		
	cout << ans;	
	
	return 0;
}
