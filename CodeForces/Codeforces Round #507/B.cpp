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
	
	int n, k, d[1010] = {0};
	cin >> n >> k;
	d[1] = 1;
	
	/*if(k >= n / 2){
		cout << 1 << "\n" << n / 2 + 1;
		return 0;
	}*/
	
	
	for(int i = 2; i <= n; i++)
		if(d[i - 1] * 2 * k + d[i - 1] >= n)
			d[i] = d[i - 1];
		else
			d[i] = d[i - 1] + 1;
	
	cout << d[n] << "\n";
	
	int z, c = d[n];
	z = c * 2 * k + c;
	
	if(z == n){
		for(int i = k + 1; i <= n; i += (2 * k + 1))
			cout << i << " ";
	}
	else{
		int ex = z - n;
		if(k + 1 - ex >= 1){
			for(int i = k + 1 - ex; i <= n; i += (2 * k + 1))
				cout << i << " ";
		}
		else{
			for(int i = 1; i <= n; i += (2 * k + 1))
				cout << i << " ";
		}
	}
	
	return 0;
}
