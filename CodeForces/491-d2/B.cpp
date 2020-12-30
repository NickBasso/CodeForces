#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, p, a[110] = {0}, ans = 0;
	double s, sum = 0;

	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
			
	sort(a, a + n);
	
	s = sum / n;
	
	for(i = 0; i < n, s < 4.499999999999999; i++){
		sum -= a[i];
		sum += 5;
		
		s = sum / n;
		ans++;
	}
	
	cout << ans;
	
	return 0;
}
