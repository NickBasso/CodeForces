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
 
void dfs(int x, int pr, int k){
	if(k > m)
		return;
	
	int add = 1;		// set increment value to 1 by default untill proved that this vertex is not a leaf vertex
	for(int i = 0; i < rel[x].size(); i++){
		if(rel[x][i] != pr){	
			add = 0;	// if we still have vertices to check it means that this vertex is not a leaft vertex and thus, answer must not be incremented				
			dfs(rel[x][i], x, k * a[rel[x][i]] + a[rel[x][i]]);
		}
	}
	ans += add;
}
 
int main(){
	//freopen("input.txt", "r", stdin);
	
	int x, y;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i < n; i++){
		cin >> x >> y;
		rel[x].pb(y);
		rel[y].pb(x);
	}
	
	dfs(1, 0, a[1]);
	
	cout << ans;
	
	return 0;
}
