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
	
	int a[3];
	
	cin>>a[0]>>a[1]>>a[2];
	
	for(int x=a[0];x>=1;x--)
		for(int y=a[1];y>=2;y--)
			for(int k=a[2];k>=3;k--)
				if(x+1==y&&y+1==k){
					cout<<x+y+k;
					return 0;
				}
		
	cout<<ans;
	
	return 0;
}
