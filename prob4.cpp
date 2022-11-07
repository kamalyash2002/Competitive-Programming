#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 

void solve(){
	ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = *max_element(arr,arr + n);
    int hash[max + 1] = {0};
    for (ll i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    
    ll maximum = 0;
    for (ll i = 0; i < (max+1); i++)
    {
        if((i+1)<(max+1)){
            if(hash[i]>0 && (hash[i+1]>0)&&((i^(i+1))<=1)){
                if(maximum<=(hash[i] + hash[i + 1])){
                    maximum = (hash[i] + hash[i + 1]);
                }
            }
        }
        
    }
    if(maximum==0){
        sort(hash, hash + max + 1);
        cout << n - hash[max] << endl;
    }
    else{
        sort(hash, hash + max + 1);
        int s = n - hash[max] ;
        int t = n - maximum;
        if(s>t){
            cout << t << endl;
        }
        else{
            cout<<s<<endl;
        }
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
