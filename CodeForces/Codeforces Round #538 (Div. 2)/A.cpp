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
	
	int x, y, z, a, b, c;
	
	cin >> x >> y >> z >> a >> b >> c;
		
		
	if(a < x){
		cout << "NO";
		return 0;
	}
	else{
		a -= x;
		x = 0;
	}
	
	if(a + b < y){
		cout << "NO";
		return 0;
	}
	else
	{
		if(a < y){
			y -= a;
			a = 0;
		}
		else{
			a -= y;
			y = 0;
		}
		
		if(b < y){
			y -= b;
			b = 0;
		}
		else{
			b -= y;
			y = 0;
		}
	}
	
	if(a + b + c < z){
		cout << "NO";
		return 0;
	}
	
	cout << "YES";
	
	return 0;
}
