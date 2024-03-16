             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        mvi v(n);
        for(int i = 0 ; i<n ; i++) cin>>v[i];
        
        ll f1 = 0;

        if(is_sorted(all(v))){
            f1 = 1;
        }
        
        // for(int i = n-1 ; i>=0 ; i--){
        //     s+=to_string(v[i]);
        // }

        mvi a(1);
        a[0] = v[n-1];
        
        for(ll i = n-2 ; i>=0 ;i--){
            if(v[i]>=10 && v[i]>a.back()){
                ll kk = v[i]%10;
                ll qq = v[i]/10;
                a.push_back(kk);
                a.push_back(qq);
            }
            else {
                a.push_back(v[i]);
            }
        }

        // for(int i = s.length()-1 ; i>=0 ; i--){
        //     a.push_back(s[i]-'0');
        // }
        
        // ll flag = 0;

        reverse(all(a));
         
         ll f2 = 0;
        if(is_sorted(all(a))){
            f2 = 1;
        }
         
        //  for(i,0,a.size()){
        //     cout<<a[i]<<" ";
        //  }
        //  nn;
       
        
        if(f1==1) YES;
        else if(f2==1) YES;
        else NO;
    }


    
    return 0;
}