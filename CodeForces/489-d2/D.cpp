#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	
	long long n, k, i, j, t, ans = 0, a[10010] = {0}, s, p;
	
	cin >> n >> k;
	
	for(i = 0; i < n; i++)
		cin >> a[i];
		
	for(i = 0; i < n; i++){
		s = 0, p = 1;
		
		for(j = i; j < n; j++)
			for(t = j; t < n - i; t++){
				s += a[t];
				p *= a[t];
			}
			
		if(p / t == k)
			ans++;
	}
		
	cout << ans;
	
	return 0;
}
