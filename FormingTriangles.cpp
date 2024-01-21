                        // ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
//#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define p1            cout<<1<<endl
#define p0            cout<<0<<endl

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        vector<ll> arr(n);
        for(ll i = 0 ; i<n ; i++){
            cin>>v[i];
            arr[i]=1LL<<v[i];
        }
        double s = 0;
        ll count = 0;
        ll flag = 0;
         sort(all(arr));

         for(ll i = n-1 ; i>=2 ; i--){

            ll l = 0;
            ll r= i-1;

            while(l<r){

                if(arr[l]+arr[r] > arr[i]){
                    count += (r-l);
                    r--;
                }
                else {
                    l++;
                }
            }
         }
        

        // for(i,0,n-2){
        //     for(j,i+1,n-1){
        //         for(k,j+1,n){
        //            s = ar[i]+ar[j]+ar[k];
        //            double curr = s/2;
        //            double kk = curr*(curr-ar[i])*(curr-ar[j])*(curr-ar[k]);
                   
        //            if(kk>0) {
        //             count++;
        //            }
                   
        //         }
        //     }
        // }
     
     cout<<count<<endl;
        

    }
    
    return 0;
}