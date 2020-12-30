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
	
	int n, powOf2, a[31] = {0};
	
	cin >> n;
	
	a[0] = powOf2 = 1;
	for(int i = 1; i <= 30; i++){
		a[i] = a[i - 1] * 2;
		powOf2 += a[i];
		//cout << a[i] << "\n";
	}
		
	//cout << "\n" << powOf2 << "\n\n";	
	
	int k = 1, ans = 0, len = 0;
	while(n){
		len++;
		
		if(n % 10 == 7)
			ans += k;
			
		n /= 10;
		k *= 2;
	}
	
	cout << ans + a[len] - 1;
	
	return 0;
}
