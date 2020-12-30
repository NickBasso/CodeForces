#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

const int N = 100;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, m;
	vector < int > c(N + 1);
	
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		int a;
		
		cin >> a;
		c[a]++;
	}
	
	for(int d = N; d >= 1; d--){
		vector < int > cc(c);
		int k = 0;
		
		for(int i = 1; i <= N; i++)
			while(cc[i] >= d){
				k++;
				cc[i] -= d;
			}
			
		if(k >= n){
			cout << d;
			return 0;
		}
	}
	
	cout << "0";
	
	return 0;
}
