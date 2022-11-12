#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 

bool even(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
bool primenum(int n){
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        return true;
    }
    else{
        return false;
    }
}

void solve(){
    cout << true << endl;
}
int main(){         
	speed
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
