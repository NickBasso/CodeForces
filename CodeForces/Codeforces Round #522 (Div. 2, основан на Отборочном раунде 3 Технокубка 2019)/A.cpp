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
	
	int n, k, a, b, ur = 1, c[101];
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> c[i];
	}
	
	sort(c, c + n);
	
	//for(int i = 0; i < n; i++){
		//cout << c[i] << " ";
	//}
	
	for(int i = 1; i < n; i++)
		if(c[i] != c[i - 1])
			ur++;
	
	//cout <<  "\n" << ur << "\n";
		
	int bl = n / ur;
	int pr = bl * ur * k;
	
	cout << pr - n;
	
	return 0;
}
