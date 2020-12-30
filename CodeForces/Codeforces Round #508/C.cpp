#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define popb pop_back()
#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, i, j, t = 1;
	long long s1 = 0, s2 = 0;
	
	cin >> n;
	
	vector < int > a;
	vector < int > b;
	
	for(i = 1; i <= n; i++){
		cin >> j;
		a.pb(j);
	}
	for(i = 1; i <= n; i++){
		cin >> j;
		b.pb(j);
	}
		
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	i = a.size() - 1;
	j = b.size() - 1;
	
	while(i >= 0 || j >= 0){
		if(t == 1){
			if(i >= 0 && j >= 0 && a[i] < b[j]){
				b.popb;
				j--;
			}
			else if(i >= 0){
				s1 += a[i];
				a.popb;
				i--;
			}
			else{
				b.popb;
				j--;
			}
		}
		
		if(t == 2){
			if(i >= 0 && j >= 0 && a[i] > b[j]){
				a.popb;
				i--;
			}
			else if(j >= 0){
				s2 += b[j];
				b.popb;
				j--;
			}
			else{
				a.popb;
				i--;
			}
		}
		
		t == 1 ? t = 2 : t = 1;
	}
	
	cout << s1 - s2;
	
	return 0;
}
