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
	
	int a, b, r;
	
	cin >> a >> b >> r;
	
	cout << (2 * r > min(a, b) ? "Second" : "First");
		
	
	return 0;
}
