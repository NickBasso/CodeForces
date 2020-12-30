#include <iostream>

using namespace std;

int n, s, a[1010], b[1010], i, j, f = -1;

void dfs(int x){
    if(x == s){
        f = 1;
    }
    
    if(f != -1){
        return;
    }
    
    if(x > s && b[x] == 1 && b[s] == 1){
    	if(b[x] == 1 && b[s] == 1){
    		 f = 1;
        	return;
		}
       	else{
	        f = 0;
	        return;
    	}
    }
    
    if(x < s && a[x] == 1){
        for(j = s; j <= n && f == -1; j++)
            if(a[j] == 1)
                dfs(j);
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    
    cin >> n >> s;
    
    for(i = 1; i <= n; i++)
        cin >> a[i];
    
    for(i = 1; i <= n; i++)
        cin >> b[i];
        
    if(a[1] == 0 || (a[s] == 0 && b[s] == 0)){
        cout << "NO";
        return 0;
    }
    
    dfs(1);
    
    if(f == 1)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
