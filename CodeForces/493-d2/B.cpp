#include <bits/stdc++.h>

#define f first
#define s second

using namespace std;

int n, b, a[110], c, ans, used[110];
pair < int, int > st[110];

void split(int f, int t){
	if(c > ans)
		ans = c;
	
	int i, j;
	
	for(int i = f + 2; i <= t; i++)
		if(!used[i] && st[t].f - st[i - 1].f == st[t].s - st[i - 1].s && st[i - 1].f == st[i - 1].s && b >= abs(a[i] - a[i - 1])){
			used[i] = 1;
			c++;
			b -= abs(a[i] - a[i - 1]);
			split(f, i - 1);
			split(i, t);
		}	
} 

int main(){
	//freopen("input.txt", "r", stdin);
	
	int i;
	
	cin >> n >> b;
	
	for(i = 1; i <= n; i++){
		cin >> a[i];
		
		if(a[i] % 2 == 0){
			st[i].f = st[i - 1].f + 1;
			st[i].s = st[i - 1].s;
		}
		else{
			st[i].f = st[i - 1].f;
			st[i].s = st[i - 1].s + 1;
		}
	}
	
	split(1, n);

	cout << ans;
	
	return 0;
}
