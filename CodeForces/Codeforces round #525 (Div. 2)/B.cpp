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
	
	int n, k, a[100100], i, j;
	
	cin >> n >> k;
	
	set < int > t;
	
	for(i = 0; i < n; i++){
		cin >> j;
		
		t.insert(j);	
	}
	
	vector < int > v(t.begin(), t.end());
	long long sum = 0, p = 0;
	i = j = 0;
	
	while(j < k){
		if(i >= v.size())
			cout << "0\n";
		else if(i > 0){
			cout << v[i] - sum << "\n";
			sum += v[i] - v[i - 1];
		}
		else{
			cout << v[0] << "\n";
			sum = v[0];
		}
		
		i++;
		j++;
	}	
	
	return 0;
}
