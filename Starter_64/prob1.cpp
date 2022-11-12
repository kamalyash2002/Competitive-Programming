#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 

void solve(){
    int size;
    cin >> size;
    string s;
    cin >> s;
    int mid = (size / 2);
    int count = 0;
    for (int i = 0; i < mid; i++)
    {
        if(s[i]==s[i+(size/2)]){
            count++;
        }
    }
    // cout << count << endl;
    if ((count) == (size / 2) ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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
