#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

string s;

bool p(){
	int i=0,j=s.size()-1;
	
	while(i<j){
		if(s[i]!=s[j]){
			return false;
		}
		else
			i++,j--;
	}
	
	return true;
}

int main(){
	freopen("input.txt", "r", stdin);
	
	int t, i;
	cin>>t;
	
	while(t){
		cin>>s;
		
		if(!p()){
			cout<<s<<"\n";
		}
		else{
			int j=0;
			for(;j<s.size()-1;j++){
				if(s[j]!=s[j+1]){
					char t=s[j];
					s[j]=s[j+1];
					s[j+1]=t;
					
					cout<<s<<"\n";
					break;
				}	
			}
			
			if(j==s.size()-1)
				cout<<"-1\n";	
		}
		
		t--;
	}
		
	
	return 0;
}
