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
	
	string s;
	
	
	cin >> s;
	
	int len = s.size(), k = len / 20 + 1, sc, cm;
	
	//cout << len << endl;
	
	if(len % 20 == 0){
		cout << len / 20 << " " << 20 <<"\n";
		
		for(int i = 0, j = 0; i < k - 1; i++, cout << "\n"){
			cm = 0;
			
			while(cm  < 20){
				cout << s[j];
				j++;
				cm++;
			}	
		}
				
		return 0;
	}
	
	cout << k << " ";
	
	if((len / k) * k < len){
		cout << len / k + 1 << "\n";
		sc = ((len / k + 1) * k) - len;
		//cout << sc << "\n";
		
		for(int i = 0, j = 0; i < k; i++, cout << endl){
			cm = 0;
			
			if(sc){
				cout << "*";
				sc--;
				cm++;
			}
			
			while(cm  < len / k + 1){
				cout << s[j];
				j++;
				cm++;
			}	
		}
		
	}
	else{
		cout << len / k << "\n";
		
		for(int i = 0, j = 0; i < k; i++, cout << "\n"){
			cm = 0;
			
			while(cm < len / k){
				cout << s[j];
				j++;
				cm++;
			}	
		}
	}
		
	
	return 0;
}
