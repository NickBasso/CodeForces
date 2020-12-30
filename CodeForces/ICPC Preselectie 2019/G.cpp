#include <bits/stdc++.h>
 
#define pb push_back
#define f first
#define s second
#define mp make_pair
 
#define pi pair < int, int >
 
typedef long long ll;
 
using namespace std;
 
const int N = 100000 + 5;
 
int n, m, a[N], ans;
vector < int > rel[N];
 
void dfs(int x, int last, int k){
	if(k > m)
		return;
	
	int inc = 1;
	for(int i = 0; i < rel[x].size(); i++){
		if(rel[x][i] != last){
			inc = 0;
			dfs(rel[x][i], x, k * a[rel[x][i]] + a[rel[x][i]]);	
		}
	}
	ans += inc;
}
 
int main(){
	//freopen("input.txt", "r", stdin);
	
	int x, y;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		//cout << a[i] << " ";
	}
	//cout << "\n\n";
	
	for(int i = 1; i < n; i++){
		cin >> x >> y;
		rel[x].pb(y);
		rel[y].pb(x);
	}
		
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < rel[i].size(); j++){
			//cout << i << " " << rel[i][j] << "    ";
		}
	}
	//cout << "\n\n\n";	
	
	dfs(1, 0, a[1]);
	
	cout << ans;
	
	return 0;
}