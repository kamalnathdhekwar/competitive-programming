#include <bits/stdc++.h>
using namespace std;
 
 
const int N   = (int) 1e6+5;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
 
int main(){
	Faster;
    int t;						cin>>t;
    while(t--){
    	int n;					cin>>n;
    	vector<int> a(n);
 
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
 
    	int ans=0;
 
    	int l=0,r=n-1;
    	while(l<r){
    		if(l+1==r){
    			if(a[l]==a[r]){
    				ans++;
    				break;
    			}
    		}
 
    		else{
    			// do not swap
    			int v1=0;
    			if(a[l]==a[l+1]){
    				v1++;
    			}
    			if(a[r]==a[r-1]){
    				v1++;
    			}
 
    			// do swap
    			int v2=0;
    			if(a[l]==a[r-1]){
    				v2++;
    			}
    			if(a[r]==a[l+1]){
    				v2++;
    			}
 
    			ans+=min(v1,v2);
    		}
 
    		l++;
    		r--;
    	}
 
 
 
    	cout<<ans<<endl;
    }
    return 0;
}
 
