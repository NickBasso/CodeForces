#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

unsigned long long n, a[200005], b[200005];

int main(){
	//freopen("input.txt", "r", stdin);
	
	cin>>n;

	for(int i=0;i<=n/2;i++)
		cin>>b[i];

	unsigned long long i=0,j=n-1,k=0,x=0,y=b[0],c=0;
	
	while(c<n/2){
		if(x+y<b[k]){
			while(x+y!=b[k]){
				x++;
			}
		}
		else{
			while(x+y!=b[k]){
				y--;
			}	
		}
			
		a[i]=x; a[j]=y;
		i++, j--;
		
		k++;
		c++;
	}
	
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	return 0;
}
