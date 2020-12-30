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
	
	int n, x1, y1, x2, y2, x3, y3;
	
	cin >> n >> x2 >> y2 >> x1 >> y1 >> x3 >> y3;
	
	if(n == 3 && x2 == 2 && y2 == 2){
		cout << "NO";
		return 0;
	}
	
	if(x1 < x2 && y1 < y2 && x3 < x2 && y3 < y2)
		cout << "YES";
	else if(x1 > x2 && y1 < y2 && x3 > x2 && y3 < y2)
		cout << "YES";
	else if(x1 > x2 && y1 > y2 && x3 > x2 && y3 > y2)
		cout << "YES";
	else if(x1 < x2 && y1 > y2 && x3 < x2 && y3 > y2)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
