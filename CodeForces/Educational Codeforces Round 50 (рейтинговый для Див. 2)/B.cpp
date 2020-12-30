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
	
	unsigned long long int q, cx, cy, x, y, k, t, i;
	
	cin >> q;
	
	for(i = 0; i < q; i++){
		cin >> x >> y >> k;
		cx = 0, cy = 0;
		t = min(x, y);
		k -= t;
		x -= t;
		y -= t;
		if(k < max(x, y)){
			cout << "-1\n";
		}
		else{
			if(x == y){
				if(k == 0){
					cout << t << "\n";
				}
				else if(k == 1){
					cout << t - 1 << "\n";
				}
				else if(k % 2 == 0){
					cout << t + k << "\n";
				}
				else{
					cout << t + k - 2 << "\n";
				}
			}
			else if(y > 0){
				if(y % 2 == 0){
					cout << t + k << "\n";
				}
				else{
					cout << t + k - 1 << "\n";
				}
			}
			else if(x > 0){
				if(x % 2 == 0){
					cout << t + k << "\n";
				}
				else{
					cout << t + k - 1 << "\n";
				}
			}
			else
				cout << "-1\n";
		}
	}
	
	
	return 0;
}
