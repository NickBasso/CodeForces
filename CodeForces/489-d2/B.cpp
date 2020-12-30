#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int l, r, x, y, i, j, a, b, ans = 0, t;
	
	cin >> l >> r >> x >> y;
	
	for(i = l; i <= r; i++)
		for(j = i; j <= r; j++){
			t = __gcd(i, j);
			
			if(t == x){
				if((i * j) / t == y)
					if(i != j)
						ans += 2;
					else
						ans++;
			}
		}
		
	cout << ans;
	
	return 0;
}
