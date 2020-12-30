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
	
	int n, i, j, c[101], mx = 0, ans, sm = 0;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> j;
		
		sm += j;
		c[i] = j;
		
		if(j > mx)
			mx = j;
	}
		
	for(i = mx;; i++){
		int cc = 0;
		
		for(j = 1; j <= n; j++)
			cc += i - c[j];
			
		if(cc > sm){
			cout << i;
			return 0;
		}
	}
		
	
	return 0;
}
