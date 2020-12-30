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
	
	string s;
	int n;
	
	cin >> n;
	
	cin >> s;
	
	for(int i = 0; i < s.size() - 1; i++)
		if(s[i] != s[i + 1]){
			cout << "YES\n" << s[i] << s[i + 1];
			return 0;
		}
			
	cout << "NO";	
	
	return 0;
}
