#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, a, b, x, i, f;
	string s;
	
	cin >> a >> b >> x;
	
	a < b ? f = 1 : f = 0;
	
	if(a == 2 && b == 2){
		cout << "0110";
		return 0;
	}
	
	if(x % 2){
		while(x > 2){
			if(f)
				s += "10", a--, b--, x--;
			else
				s += "01", a--, b--, x--;
		}
		
		if(f)
			s += "1", x--, b--;
		else
			s += "0", x--, a--;
		
		if(f){
			while(b)
				s += "1", b--;
				
			while(a)
				s += "0", a--;
		}
		else{
			while(a)
				s += "0", a--;
				
			while(b)
				s += "1", b--;	
		}
	}
	else{
		while(x > 3){
			if(f)
				s += "10", a--, b--, x--;
			else
				s += "01", a--, b--, x--;
		}
		
		if(f){
			while(a)
				s += "0", a--;
				
			while(b)
				s += "1", b--;
		}
		else{
			while(a)
				s += "0", a--;
				
			while(b)
				s += "1", b--;
		}
	}
			
	cout << s;
	
	return 0;
}
