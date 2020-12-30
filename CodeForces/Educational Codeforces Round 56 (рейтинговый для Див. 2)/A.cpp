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
	
	int t, i, x;
	cin>>x;
	
	for(i=0;i<x;i++){
		cin>>t;
		int c=0;
		
		while(t>8){
			t-=7;
			c++;
		}
		while(t>7){
			t-=6;
			c++;
		}
		while(t>6){
			t-=5;
			c++;
		}
		while(t>5){
			t-=4;
			c++;
		}
		while(t>4){
			t-=3;
			c++;
		}
		while(t==3){
			t-=3;
			c++;
		}
		while(t>0 && t <= 4){
			t-=2;
			c++;
		}
		cout<<c<<"\n";
	}
		
	
	return 0;
}
