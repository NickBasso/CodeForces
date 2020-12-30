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
	
	string s, p;
	int t, i, j, l;
	
	cin >> t;
	
	for(i = 0; i < t; i++){
		cin >> s;
		
		int ll = 0, lb = 0, nm = 0;
		
		for(j = 0; j < s.size(); j++)
			if(s[j] >= 'a' && s[j] <= 'z')
				ll++;
			else if(s[j] >= 'A' && s[j] <= 'Z')
				lb++;
			else
				nm++;
				
		if(ll && lb && nm){
			cout << s << "\n";
		}
		else{
			int req = 0;
			
			if(ll == 0)
				req++;
			if(lb == 0)
				req++;
			if(nm == 0)
				req++;
				
				
			int mx;
			char c;
			
			if(ll >= lb && ll >= nm){
				mx = ll;
				c = '1';
			}
			else if(lb >= ll && lb >= nm){
				mx = lb;
				c = '2';
			}
			else{
				mx = nm;
				c = '3';
			}
			
			int x, cc, mxl = 0, p = 0;
			
			for(j = 0; j < s.length(); j++){
				if(c == '1'){
					x = j, cc = 0;
					
					while(x < s.length() && cc < req)
						if(s[j] >= 'a' && s[j] <= 'z'){
							x++;
							cc++;
						}
						else
							break;
						
					if(x - j + 1 > mxl){
						mxl = x - j + 1;
						p = j;
					}
					
					if(cc == req){
						break;
					}
				}
				if(c == '2'){
					x = j, cc = 0;
					
					while(x < s.length() && cc < req)
						if(s[j] >= 'A' && s[j] <= 'Z'){
							x++;
							cc++;
						}
						else
							break;
						
					if(x - j + 1 > mxl){
						mxl = x - j + 1;
						p = j;
					}
						
					if(cc == req){
						break;
					}
				}
				if(c == '3'){
					x = j, cc = 0;
					
					while(x < s.length() && cc < req)
						if(s[j] >= '0' && s[j] <= '9'){
							x++;
							cc++;
						}
						else
							break;
						
					if(x - j + 1 > mxl){
						mxl = x - j + 1;
						p = j;
					}
						
					if(cc == req){
						break;
					}
				}		
			}
			
			int y;
			j = y = p;
			
			for(j; j < y + req; j++){
				if(ll == 0){
					s[j] = 'a';
					ll++;
				}
				else if(lb == 0){
					s[j] = 'A';
					lb++;
				}
				else if(nm == 0){
					s[j] = '1';
					nm++;
				}
			}
			
			cout << s << "\n";
		}
	}
	
	return 0;
}
