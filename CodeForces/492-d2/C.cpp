#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <set>

using namespace std;

int n, k, ans, a[6][52], p[6][52], t;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int i, j, c = 0;
	
	cin >> n >> k;
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			cin >> a[i][j];
			
	for(i = 1; i <= n; i++){
		if(a[1][j] == 0)
			c++;
		if(a[4][j] == 0)
			c++;
	}
	
	if(2 * n - c < k){
		cout << "-1";
		return 0;
	}
	
	return 0;
}
