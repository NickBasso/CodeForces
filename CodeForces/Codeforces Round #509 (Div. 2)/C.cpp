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
	
	unsigned long long n, m, d, i, j, a[200100], b[200100] = {0}, c = 1, days = 1, day = 1, v;
	
	cin >> n >> m >> d;
	
	set < unsigned long long > s;
	
	for(i = 1; i <= n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
		
	sort(a + 1, a + n + 1);
	
	set < unsigned long long >::iterator it = s.begin();
	
	//s.erase(*it);
	v = a[1];
	b[a[1]] = 1;
	
	while(c < n){
		if(s.count())
	}
	
	
	
	return 0;
}
