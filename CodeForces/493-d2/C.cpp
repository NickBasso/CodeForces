#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	long long n, x, y, i, c = 0;
	string s;
	
	cin >> n >> x >> y >> s;
	
	s = "1" + s + "1";
	
	i = 1;
	
	while(i < s.size()){
		if(s[i - 1] == '1' && s[i] == '0')
			c++;
			
		i++;
	}
		
	if(c == 0)
		cout << 0;
	else	
		cout << (c - 1) * min(x, y) + y;		
	
	return 0;
}
