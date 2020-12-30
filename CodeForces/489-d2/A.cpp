#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

set < int > s;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, a[10010];
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> a[i];
		
		if(a[i] != 0)
			s.insert(a[i]);
	}
		
	/*sort(a, a + n);
	
	for(i = 0; i < n;){
		if(a[i] != 0){
			j = i;
			
			while(a[j] == a[i])
				j++;
				
			ans++;
			i += j - i;		
		}
		else
			i++;
	}*/
			
	cout << s.size();
	
	return 0;
}
