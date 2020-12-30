#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

long long n, m;
vector < long long > d;

int main(){
	//freopen("input.txt", "r", stdin);
	
	cin >> n >> m;
	
	for(long long i = 0; i <= 100001; i++){
		long long k = (i * (i - 1)) / 2;
		d.pb(k);
	}
		
	/*for(int i = 0; i <= 20; i++)
		cout << d[i] << " ";
	cout << "\n";*/
		
	if(m >= (n + 1) / 2)
		cout << 0 << " ";
	else
		cout << n - (m * 2) << " ";
		
	long long j = 0;
	while(d[j] < m)
		j++;
		
	cout << n - j;
	
	return 0;
}
