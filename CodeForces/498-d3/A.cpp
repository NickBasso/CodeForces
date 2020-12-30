#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> j;
		
		if(j % 2 == 1)
			cout << j << " ";
		else
			cout << j - 1 << " ";
	}
	
	cout << endl;
	
	return 0;
}
