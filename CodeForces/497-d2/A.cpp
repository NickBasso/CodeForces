#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	string s;
	
	cin >> s;
	
	int a[255] = {0};
	a['a'] = a['o'] = a['u'] = a['i'] = a['e'] = a['n'] = 1;
	
	if(a[s[s.size() - 1]] == 0)
		goto m;
	
	for(int i = 1; i < s.size(); i++)
		if(a[s[i]] == 0 && a[s[i - 1]] == 0 || (s[i] == 'n' && a[s[i - 1]] == 0))
			goto m;
			
	cout << "YES";
	
	return 0;
	
	m: cout << "NO";
	
	return 0;
}
