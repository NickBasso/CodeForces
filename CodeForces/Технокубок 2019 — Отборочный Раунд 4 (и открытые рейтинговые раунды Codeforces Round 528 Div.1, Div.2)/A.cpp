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
	
	string s,t;
	
	cin >> s;
	
	int p=s.size(), c=1 ,r=1,i=1, tw=0, k=1;
	if(p%2)
		i=p/2;
	else
		i=p/2-1;
		
	t+=s[i];
		
	while(c<p){
		if(r)
			t+=s[i+k];
		else
			t+=s[i-k];
			
		r=1-r;
			
		tw++;
		if(tw==2)
			tw=0,k++;
			
		c++;
	}
	
	cout<<t;	
	
	return 0;
}
