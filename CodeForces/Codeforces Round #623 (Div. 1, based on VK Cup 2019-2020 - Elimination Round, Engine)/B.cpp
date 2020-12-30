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
	
	int t, a, b, p, i, j;
	string s;
	
	cin >> t;
	
	for(i = 0; i < t; i++){
		
		cin >> a >> b >> p >> s;
		
		int ans = 1, len = s.size(), cash = p;
		int price[2] = {a, b};
		int k, start;
		
		j = 0;
		while(j < len - 1){
			k = start = j;
			cash = p;
			
			while(k < len - 1 && ((k > 0 && s[k] == s[k - 1]) || cash >= price[s[j] - 'A'])){
				if(s[k] != s[k - 1] || cash == p){
					cash -= price[s[k] - 'A'];
					k++;
				}
			
				while(k < len - 1 && s[k] == s[k - 1])
					k++;
			}
			
			if(k == len - 1){
				cout << start + 1 << "\n";
				break; 
			}
				
			j++;
		}
		
		if(j == len - 1){
			cout << len << "\n";
		}	
	}
		
	
	return 0;
}
