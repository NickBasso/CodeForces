#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int a, b, c, n, s;
	
	cin >> a >> b >> c >> n;
	
	if(a < c || b < c || a + b - c >= n || c > a || c > b)
		cout << "-1";
	else
		cout << n - (a + b - c);
	
	return 0;
}
