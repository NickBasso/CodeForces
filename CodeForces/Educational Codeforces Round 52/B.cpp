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
	
	unsigned long long a, b, c, d, t;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c >> d;
		
		cout << a / d + (a / d / b * c) << "\n";
	}
	
	return 0;
}
