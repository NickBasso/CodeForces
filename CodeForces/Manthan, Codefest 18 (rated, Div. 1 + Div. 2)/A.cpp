#include <iostream>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, ans = 0;
	
	cin >> n;
	
	int sum = 0, v = 1;
	while(sum < n){
		sum += v;
		v++;
		ans++;
	}
	
	cout << ans;
	
	return 0;
}
