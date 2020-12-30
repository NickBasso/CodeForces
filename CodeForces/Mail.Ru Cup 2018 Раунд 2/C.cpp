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
	
	long long la, ra, ta, lb, rb, tb, i, j, ans = 0, x1, y1, x2, y2, op = 0;
	
	cin >> la >> ra >> ta >> lb >> rb >> tb;
	
	cout << la << " " << ra << " " << ta << "\n";
	cout << lb << " " << rb << " " << tb << "\n\n";
	
	pair < long long, long long > c[2];
	long long t[2];
	t[0] = ta; t[1] = tb;
	
	c[0] = mp(la, ra);
	c[1] = mp(lb, rb);
	
	x1 = la; y1 = ra;
	x2 = ra; y2 = rb;
		
		
	cout << c[0].first << " " << c[0].second << "\n";
	cout << c[1].first << " " << c[1].second << "\n\n";
	
	
	while(op < 1000000){
		long long k;
		if(c[0].f < c[1].f){
			swap(c[0], c[1]);
			swap(t[0], t[1]);
		}
		
		if(c[1].second < c[0].first){
			x1 = c[0].first; y1 = c[0].second;
			x2 = c[1].first; y1 = c[1].second;
		
			k = (c[0].first - c[1].second) / t[1];
		
			if((c[0].first - c[1].second) % t[1])
				k++;
		}
		
		x1 = c[0].first * k; y1 = c[0].second * k;
		x2 = c[1].first * k; y1 = c[1].second * k;
		
		
		
		if(x1 - y2 >= ans)
			ans = x1 - y2;
			
		
		
		op++;
	}
	
	cout << ans;
	
	return 0;
}
