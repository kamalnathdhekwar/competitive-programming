                // ***  ... जय श्री राम ...  *** //
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
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
    ll m,n;
    cin>>n>>m;
    string x,s;
    cin>>x;
    cin>>s;
    ll flag =0;
    for(i,0,11){
        if(x.find(s) != string::npos){
            cout<<i<<endl;
            flag = 1;
            break;
        }
        x+=x;
    }
    if(flag==0)  cout<<-1<<endl;
    // sort(all(x));
    // sort(all(s));
    // if(n>m){
    //     for(i,0,n){
    //         if(s[i]==x[i]) count++;
    //     }
    //     if(count==m) p1;
    //     else p0;
    // }
    

} 
       
 
return 0;
}