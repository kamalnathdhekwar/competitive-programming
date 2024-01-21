 // जय श्री राम //
#include<bits/stdc++.h>
using namespace std;
 
#define ll             long long
#define all(x)         sort(x.begin(),x.end())
#define for(i,a,b)     for(ll i = a ; i<b ; i++)

int main()
{
 ll t;
 cin>>t;
while(t--){
    ll b,c,h;
    cin>>b>>c>>h;
    ll count=1;
    

    // if(b==c+h) cout<<b+c+h-1<<endl;
    // else if(b>c+h) cout<<b-(c+h)<<endl;
    // else cout<<b+b-1<<endl;
    b--;
    while(b>0 && c--){ 
        b--;
        count+=2;
       
    }
     while(b>0 && h--){
         b--;
        count+=2;
        
    }
    cout<<count<<endl;
} 
       
 
return 0;
}
