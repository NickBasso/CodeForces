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
	
	int t, n, i, j, a[110], ans[210];
	bool used[210];
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		for(int k = 0; k < 210; k++){
			used[k] = false;
		}
			
		cin >> n;
		
		for(j = 0; j < n; j++){
			cin >> a[j];
			used[a[j]] = true;
		}
			
		for(j = 0; j <= 2 * n - 1; j += 2){
			int k = a[j / 2] + 1;
			
			while(k <= 2 * n && used[k] == true)
				k++;
				
			if(k > 2 * n){
				cout << -1 << "\n";
				break;
			}
			else{
				ans[j] = a[j / 2];
				ans[j + 1] = k;
				used[k] = true;
			}
		}	
		
		if(j >= 2 * n){
			for(int k = 0; k < 2 * n; k++)
				cout << ans[k] << " ";
			cout << "\n";
		}
		
	}
	
	return 0;
}
