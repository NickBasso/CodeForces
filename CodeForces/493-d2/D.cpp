#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	
	int n, i, j, k, p, ans;
	vector < char > v, x;
	v.pb('I');
	v.pb('V');
	v.pb('X');
	v.pb('L');
	
	cin >> n;
	
	set < vector < char > > a;
	
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
			for(k = 0; k < 4; k++)
				for(p = 0; p < 4; p++){
					x.pb(v[i]);
					x.pb(v[j]);
					x.pb(v[k]);
					x.pb(v[p]);
					
					sort(x.begin(), x.end());
					a.insert(x);
				}
					
	cout << a.size() << endl;
		for(set < vector < char > >::iterator it = a.begin(); it != a.end(); ++it)
			cout << *it << endl;
	
	return 0;
}
