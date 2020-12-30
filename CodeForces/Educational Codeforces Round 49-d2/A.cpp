#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int t, n, i, j;
	string s, o;
	
	cin >> t;
	
	while(cin >> n){
		cin >> s;
		
		i = 0;
		j = n - 1;
		
		while(i < j){
			if(s[i] == s[j]){
				if(s[i] == s[j] && s[i] == 'a'){
					s[i] = s[j] = 'b';
				}
				else if(s[i] == s[j] && s[i] == 'z'){
					s[i] = s[j] = 'y';
				}
				else{
					s[i] = s[j] = s[i] + 1;
				}
			}
			else if(abs(s[i] - s[j]) == 2){
				if(s[i] < s[j]){
					s[i]++;
					s[j]--;
				}		
				else{
					s[i]--;
					s[j]++;
				}		
			}
			else{
				cout << "NO\n";
				break;
			}
			
			i++, j--;
		}
		
		if(i > j)
			cout << "YES\n";
	}
	
	return 0;
}
