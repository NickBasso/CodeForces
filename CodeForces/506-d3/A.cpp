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
	
	int n, k, i;
	string s;
	
	cin >> n >> k >> s;
	
	for(i = 1; i < n; i++){
		int j;
		
		for(j = i; j < n; j++){
			if(s[j] == s[j - i])
				continue;
			else
				break;
		}
		
		if(j == n){
			cout << s;
				
			for(int t = 0; t < k - 1; t++)
				for(int e = n - i; e < n; e++)
					cout << s[e];
					
			break;
		}	
	}
	
	if(i == n){
		for(int i = 0; i < k; i++)
			cout << s;
	}
		
	
	return 0;
}
