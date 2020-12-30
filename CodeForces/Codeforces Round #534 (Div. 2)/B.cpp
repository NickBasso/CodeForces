#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);

	string s;
	int i, j, k=0;
    /*cout<<k<<endl;
    k=!k;
    cout<<k<<endl;*/
	cin >> s;

	i=0;
	//cout<<s.size()<<" "<<i<<"  "<<s<<"\n";

	while(i+1<s.size()){
        //cout<<"before check: "<<s.size()<<" "<<i<<"  "<<s<<"\n";
        if(s[i]==s[i+1]){
            s.erase(i,2);
            //cout<<s.size()<<" "<<i<<"  "<<s<<"\n";
            k=!k;
            i-=2;
        }
    //cout<<"after check: "<<s.size()<<" "<<i<<"  "<<s<<"\n";
        if(i<0)
            i=0;
        else
            i++;
        cout<<"after check: "<<s.size()<<" "<<i<<"  "<<s<<"\n";
	}

	if(k)
        puts("Yes");
    else
        puts("No");



	return 0;
}
