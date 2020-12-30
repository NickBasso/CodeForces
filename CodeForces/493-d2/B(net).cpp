#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int n, B, a[102], c, d[102], k, i;

int main()
{
	cin>>n>>B;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<n;i++) {
		if(a[i]%2) c++;
		else c--;
		if(c==0) d[k++]=abs(a[i]-a[i+1]);
	}
	sort(d,d+k);
	for(i=0;i<k&&B>=d[i];i++) B-=d[i];
	cout<<i<<endl;
	return 0;
} 
