#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 

void solve(){
	ll n;
	cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i-1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
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
