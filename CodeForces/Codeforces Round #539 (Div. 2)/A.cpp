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
	
	int n, v;
	
	cin >> n >> v;
	
	if(v >= n - 1){
		cout << n - 1;
		return 0;
	}
	
	if(n - 1 > v){
		int i = 2, s = v;
		
		for(; i <= n - v; i++)
			s += i;
			
		cout << s;
	}
		
	
	return 0;
}
