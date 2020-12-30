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
	
	int n, k, i, j, ans = 0, ct[100] = {0}, cc;
	char a[100010] = {0}, c = 'A';
	
	cin >> n >> k;
	
	for(i = 1; i <= n; i++){
		cin >> a[i];
		ct[a[i]]++;
	}
	
	vector < int > cnts;
		
	for(i = 'A'; i <= 'A' + k - 1; i++){
		if(ct[i] == 0){
			cout << "0";
			return 0;
		}
		cnts.pb(ct[i]);
	}
				
	sort(cnts.rbegin(), cnts.rend());
	
	/*for(i = 'A'; i <= 'Z'; i++)
		cout << char(i) << "   " << ct[i] << "\n";
	cout << "\n\n";
	
	for(i = 0; i < cnts.size(); i++)
		cout << cnts[i] << "\n";*/
	
	cout << cnts[k - 1] * k;
	
	return 0;
}
