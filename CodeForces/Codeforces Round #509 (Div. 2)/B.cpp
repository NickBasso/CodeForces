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
	
	unsigned long long a, b, x, y;
	
	cin >> a >> b >> x >> y;
	
	cout << min(b / (__gcd(x,y)), a / (__gcd(x,y)));
	
	
	
	
	
	return 0;
}
