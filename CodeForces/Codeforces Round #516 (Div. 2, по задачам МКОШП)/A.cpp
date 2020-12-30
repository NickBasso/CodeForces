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
	
	int a[3];
	
	cin >> a[0] >> a[1] >> a[2];
	
	sort(a, a + 3);
	
	if(a[0] + a[1] > a[2])
		cout << 0;
	else
		cout << a[2] - a[1] - a[0] + 1;
		
	
	return 0;
}
