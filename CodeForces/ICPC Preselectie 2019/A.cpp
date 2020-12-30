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
	
	int n, m;
	
	cin >> n >> m;
	
	if(n == 0){
		if(m == 0){
			cout << 0 << " " << 0;
			return 0;
		}
		else{
			cout << "Impossible";
			return 0;
		}
	}
	
	if(n > 0 && m == 0){
		cout << n << " " << n;
		return 0;
	}
	if(n >= m){
		cout << n << " " << n + m - 1;
		return 0;
	}
	if(n < m){
		cout << m << " " << n + m - 1;
		return 0;
	}
	
	
	
	return 0;
}
