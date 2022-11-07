#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 

void solve(){
	ll x, y,z;
	cin >> x >> y>>z;
    int a = y / z;
    float b = float(y) /float(z);
    if(a<b){
        cout << (a + 1) * x << endl;
    }
    else{
        cout<<a  * x << endl;
    }
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
