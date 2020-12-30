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
	
	int n, i, j, ans = 0, s1 = 0, s2 = 0;
	
	cin >> n;
	
	if(n < 3){
		cout << "No";
		return 0;
	}
	
	if(n % 2 == 0){
		for(i = 1; i <= n; i+=2){
			s1 += i;
			s2 += i + 1;
		}
		
		if(__gcd(s1, s2) > 1){
			cout << "Yes\n" << n / 2 << " ";
		
			for(i = 2; i <= n; i+=2)
				cout << i << " ";
			
			cout << "\n" << n / 2 << " ";
			
			for(i = 1; i <= n; i += 2)
				cout << i << " ";
		}
	}	
	else{
		for(i = 1; i <= n; i+=2){
			s1 += i;
			s2 += i + 1;
		}
		
		s2 -= (i - 1);
		
		if(__gcd(s1, s2) > 1){
			cout << "Yes\n" << n / 2 << " ";
		
			for(i = 2; i <= n; i+=2)
				cout << i << " ";
			
			cout << "\n" << n / 2 + 1 << " ";
			
			for(i = 1; i <= n; i += 2)
				cout << i << " ";
		}
	}
	
	//cout << "\n" << __gcd(s1, s2) << "  " << s1 << "  " << s2 << "\n\n";
	
	return 0;
}
