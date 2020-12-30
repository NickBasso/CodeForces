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
	
	int x, a, b, i;
	
	cin >> x;	
	
	for(i = 0; i <= x; i++)
		for(int j = 0; j <= i; j++)
			if(i * j > x && i % j == 0 && i / j < x){
				cout << i << " " << j;
				return 0;
			}
				
	cout << "-1";
	
	return 0;
}
