#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int n, q, of, nm, c;
vector < vector < int > > m;
bool stop;

void dfs(int cof){
	int j;
	c++;
	
	if(c == nm){
		cout << cof << "\n";
		stop = true;
	}
	
	
	for(j = 0; j < m[cof].size() && stop != true; j++)
		dfs(m[cof][j]);
}


int main(){
	freopen("input.txt", "r", stdin);
	
	int n, i, j, x, y;
	
	cin >> n >> q;
	
	m.resize(n + 1, vector < int >());
	
	for(i = 1; i <= n - 1; i++){
		cin >> y;
		
		m[y].pb(i + 1);
	}
	
	/*for(i = 1, cout << i << ":  "; i <= n; i++, cout << endl, cout << i << ":  ")
		for(auto a : m[i])
			cout << a << " ";
			
	cout << endl << endl;*/
	
	for(i = 0; i < q; i++){
		cin >> of >> nm;
		
		stop = false;
		
		c = 0;
		
		dfs(of);
		
		if(stop == false)
			cout << "-1\n";
	}
	
	return 0;
}
