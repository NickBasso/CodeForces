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
	
	int l, r, i, j, c = 0, a[300010] = {0}, b[300010] = {0};
	
	cin >> l >> r;
	
	i = l, j = l + 1;
	
	cout << "YES\n";
	
	while(i < r){
			a[i] = a[j] = 1;
			b[i] = j;
			b[j] = i;
			cout << i << "  " << j << "\n";
			i+=2, j+=2;
			c++;
	}	
	
	return 0;
}
