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
	
	int a, b, k1 = 0, k2 = 0, i = 1;
	
	cin >> a >> b;
	
	while(a - i >= 0){
		a -= i;
		i += 2;
		k1++;
	}
	
	i = 2;
	while(b - i >= 0){
		b -= i;
		i += 2;
		k2++;
	}
	
	//cout << a << " " << b << "\n";
	//cout << k1 << " " << k2 << "\n";
	
	if(k1 <= k2)
		cout << "Vladik";
	else
		cout << "Valera";
	
	return 0;
}
