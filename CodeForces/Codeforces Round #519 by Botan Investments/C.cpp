#include <bits/stdc++.h>

using namespace std;

const int N = 1007;

string s;
bool write[N];

int main(){
	freopen("input.txt", "r", stdin);
	cin >> s;
	for(int i = 1; i < s.size(); ++i)
		if(s[i] == 'a'){
			write[i - 1] ^= 1;
			write[i] = 1;
		}
	
	for(int i = 0; i < s.size(); ++i)
		printf("%d%c", write[i], i + 1 == (int)s.size() ? '\n' : ' ');		//abbaabba
	return 0;
}
