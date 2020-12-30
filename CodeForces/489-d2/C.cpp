#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	long long i, j, x, k, a, b;
	
	cin >> x >> k;
	
	a = b = x;
	
	for(i = 0; i < k; i++){
		a *= 2;
		b = b * 2 - 1;
	}
		
	a *= 2;
	b *= 2;
	
	cout << (a + b) / 2;
	
	return 0;
}
