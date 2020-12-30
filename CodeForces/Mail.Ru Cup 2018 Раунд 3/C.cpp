#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >


using namespace std;

const int N = 2010;

bool cmp(const pair<int,int>&a, const pair<int,int>&b){
	return a.f < b.f;
}

int n, m, t, x, y, ms, cm, s1, s2;
//pair<int,int>a[N];
vector<pair<int,int>>a;
int org[N];
//pair<int,int>a[N];
bool c;
int u[N], uc[N];
vector < pair <int, int> > p;
map<int,int>ll;


int main(){
	freopen("input.txt", "r", stdin);
	
	int i, j, k, d = 0, lt = 1;

	cin >> n >> m;
	
	ms = 2 * n;
	
	for(i = 1; i <= ms; i++){
		cin >> x;

		org[i] = x;
		
		a.pb(mp(x, i));
	}	
		
	sort(a.begin(), a.end());
	
	for(j=0;j<ms;j++)
		cout<<a[j].s<<" "<<a[j].f<<"\n";
	cout<<"\n\n\n";
		
	for(j = 1; j <= m; j++){
		cin >> x >> y;
		p.pb(mp(max(x, y), min(x, y)));
		
		ll[x] = y;
		ll[y] = x;
	}
	
	sort(p.begin(), p.end(), cmp);
	
	for(i = 0; i < p.size(); i++)
		cout << p[i].f << "  " << p[i].second << "\n";	
		
	cout << "\n\n";
	
	cin >> t;
	
	//cout << p.size() <<"\n";
	
	int last = 0;
	
	if(t == 2){
		cin >> k;
		u[k] = 1;
		d++;
		if(ll.count(k))
			last = k;
	}
			
	int cmxa = ms, mx;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	while(cm < n){
		if(!ll.count(last)){
			if(p.size() > 0){
				mx=p[p.size() - 1].f;
				
				j = 0;
				while(mx != org[j])
					j++;
					
				if(u[j])
					j++;
				
				last=mx;
				
				s1 += mx;
				cout << j <<"\n\n";
				
				j = 0;
				
				while(mx != a[j].f)
					j++;
					
				if(u[a[j].s])
					j++;
					
				u[a[j].s] = 1;
				
				p.erase(p.begin() + p.size() - 1);
				fflush(stdout); 
			}
			else if(p.size() == 0){
				while(uc[cmxa - 1] || u[a[cmxa - 1].s])
					cmxa--;
					
				s1 += a[cmxa - 1].f;
				
				uc[cmxa - 1] = 1;
				
				j = 0;
				while(a[cmxa - 1].f != org[j])
					j++;
					
				if(u[j])
					j++;
					
				u[j] = 1;
				
				cout << a[cmxa - 1].s <<"\n\n";
				fflush(stdout);
				
				cmxa--;
			}
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
		else if(ll.count(last)){		
			j = 0; mx = k;
			u[ll[k]] = 1;
			
			cout << ll[last] <<"\n\n";
			fflush(stdout);
			
			lt = 2;
			
			p.erase(p.begin() + p.size() - 1);
		}
		
		d++;
		cm++;
		
		if(d < ms - 1){
			
			if(lt == 2){
				cin >> k;
				u[k] = 1;
				
				last = k;
					
				d++;
			}
		}
	}
	
	cout << s1;
	
	return 0;
}
