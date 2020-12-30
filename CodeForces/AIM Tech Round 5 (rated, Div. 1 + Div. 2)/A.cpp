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
	
	int n, m, i, j, xs, ys, xe, ye;
	char a[120][120] = {0};
	
	cin >> n >> m;
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> a[i][j];
		
			
	i = j = 1;
	while(a[i][j] != 'B' && i <= n){
		if(j < m)
			j++;
		else
			i++, j = 1;
	}
	xs = i, ys = j;
	
	i = n, j = m;
	while(a[i][j] != 'B' && i >= 0){
		if(j > 1)
			j--;
		else
			i--, j = m;
	}
	xe = i, ye = j;
	
	cout << (xs + xe) / 2 << " " << (ys +  ye) / 2;
	
	return 0;
}
