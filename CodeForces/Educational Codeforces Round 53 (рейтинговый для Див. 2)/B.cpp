#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

const int S = 2e5 + 10;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, ans = 0, a[S], b[S], p = 1, d;
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
		cin >> a[i];
		
	for(i = 1; i <= n; i++)
		cin >> b[i];
		
	i = 1;
	set < int > used;
	
	for(i = 1; i <= n; i++){
		d = b[i];
		
		if(!used.count(d)){
			j = p;
			while(a[j] != d){
				used.insert(a[j++]);
			}
			
			if(j <= n){
				used.insert(d);
				cout << j - p + 1 << " ";
				p = j + 1;
			}
		}
		else{
			cout << "0 ";
		}
	}
	
	return 0;
}
