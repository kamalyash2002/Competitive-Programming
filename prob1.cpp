#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 

void solve(){
	ll x, y;
	cin >> x >> y;
	if((2*x)>(5*y)){
		cout << "Chocolate" << endl;
	}
	else if((2*x)<(5*y)){
		cout << "Candy" << endl;
	}
	else{
		cout<<"Either"<<endl;
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
