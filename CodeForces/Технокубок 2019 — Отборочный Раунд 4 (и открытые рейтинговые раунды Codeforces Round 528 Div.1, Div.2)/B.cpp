#include <bits/stdc++.h>
using namespace std;
int n,k,p;
int main(){
	//freopen("input.txt", "r", stdin);
	for(cin>>n>>k,p=k-1;p>0&&n%p;p--);
	cout<<n/p*k+p;
}
