// ***  ... जय श्री राम ...  *** //
#include<bits/stdc++.h>
using namespace std;

#define ll            long long
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl


int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        vector<int> v(n);
        for(i,0,n){
            cin>>v[i];
        }
        sort(all(v));
        vector<int> p;
        vector<int> o;
        p.push_back(0);
        o.push_back(0);

        for(i,0,n){
            p.push_back(p.back()+v[i]);
        }
        reverse(all(v));
       //sort(v.rbegin(),v.rend()); 
       for(i,0,n){
            o.push_back(o.back()+v[i]);
        }
        ll res = -1*p.back();
        ll mini = min(mini,n);
        ll rm = 0;
        for(i,0,mini+1){
            if(i>0){
                rm=rm+v[i-1];
            }
            ll mm = p[n-i];
            ll ff = n-i;
            ff=min(x,ff);
            ll ss=o[ff+i]-rm;

            res = max(res,mm-2*ss);
        }

        cout<<res<<endl;
        

    } 
       
 
return 0;
}