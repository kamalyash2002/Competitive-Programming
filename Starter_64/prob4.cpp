#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
typedef long long int ll; 


void solve(){
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    int min =*min_element(arr,arr+size);
    int flag=0,counter1=0;
	for(int i= 0; i<size;i++){
	        if(arr[i]!=min){
	            if(arr[i]%min==0){
	                counter1++;
	            }
	            else{
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag!=1){
	        cout<<counter1<<endl;
	    }
	    else{
	        cout<<size<<endl;
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
