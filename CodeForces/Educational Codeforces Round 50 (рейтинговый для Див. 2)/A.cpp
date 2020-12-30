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
	
	unsigned long long int n, k;
	
	cin >> n >> k;
	
	if(k <= n){
		cout << 1;
		return 0;
	}
	
	cout << (k - 1) / n + 1;
	
	return 0;
}
