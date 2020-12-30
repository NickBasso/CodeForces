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
	
	int n, i, l, a[100]={0},c=1,j=0;
	string s, t;
	
	cin>>n>>s;
	
	i=0;
	while(i<n){
		t+=s[i];
		while(j<c)
			j++,i++;
			
		c++;
		
		j=0;
	}
	
	cout<<t;
	
	
	return 0;
}
