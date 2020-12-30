#include <iostream>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, a, mx = 2e9, ans;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> a;
		
		a -= i - 1;
		
		if(mx > (a + n - 1) / n){
			mx = (a + n - 1) / n;
			ans = i;
		}
	}
	
	cout << ans;
	
	return 0;
}
