#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int a[2010], b[2010], c[2010], n, cnt = 0, t, k, i, j = 1, ans = 0;
	
	cin >> n >> k;
	
	for(i  = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
		
	sort(b + 1, b + n + 1);
		
	for(i = n; i > n - k; i--)
		c[j] = b[i], ans += b[i], j++;
		
	/*for(i = 1; i <= n; i++)
		cout << b[i] << " ";
	cout << endl;
	
	for(i = 1; i <= k; i++)
		cout << c[i] << " ";
	cout << endl;*/
			
	cout << ans << endl;
	
	for(i = 1, t = 1; i <= n; i++, t++)
		for(j = 1; j <= k; j++)
			if(a[i] == c[j] && cnt == k - 1){
				cout << t + n - i << " ", c[j] = -1; 
				break;
			}	
			else if(a[i] == c[j]){
				cout << t << " ", t = 0, cnt++, c[j] = -1;
				break;
			}
				
	return 0;
}
