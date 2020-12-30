#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int i, n, x[110] = {0}, a = 1e9, b = 0, p;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> x[i];
		b += x[i];
		
		if(x[i] < a){
			a = x[i];
			p = i;
		}
	}
		
	if(a > 0 && b > 0 && a != b && 2 * a < b)
		cout << "1\n" << p; 
	else
		cout << "-1";
	
	return 0;
}
