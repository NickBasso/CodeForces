#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	string s;
	char t;
	int i = 0, j = 0, a, b;
	
	cin >> s;
	
 	while(i < s.size()){
 		j = i;
 		
 		while(s[i] == s[j])
 			j++;
 			
 		if(s[j] == s[i] - 1){
 			t = s[i];
			s[i] = s[j];
			s[j] = t;
			
			i++;
		}
		else
			i = j;	
	}
	
	cout << s;
	
	return 0;
}
