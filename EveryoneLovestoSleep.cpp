
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
int main()
{
 ll t;
 cin>>t;
while(t--){
    ll n ,h,m;
    cin>>n>>h>>m;
    
    // ll ah = 0;
    // ll am = 0;
    // int flag = 0;
     map<int ,int>mp;
     for(int i = 0 ; i<n ; i++)
     {
        int hi , mi;
        cin>>hi>>mi;
        mp[hi*60+mi]++;

        // if(n==1){
        //     if(hi==h && mi == m ){
        //     ah = 0;
        //     am = 0;
        //     flag = 1;
        //     break;
        // }
        // else {
        //      if(mi==0){
        //          mi=60;
        //          hi--;
        //     }
        //     else if(mi+m>=60) {
        //        m= mi+m-60;
        //        mi=0;
        //         h++;
        //     }
            
            
        //     if(h==24) h = 0;

        //     am=mi-m;
        //     ah=hi-h;
        //     if(am<0)am = 60+am;
        //     if(ah<0)ah=60+ah;
        //     break;

        // }
        // if(flag==1) break;
        // }
      //  n--;
     }

ll ans = 0;
while(!mp[(h*60 + m + ans) % (24*60)]) ans++;
ans = ans%( 24*60);

     cout<<ans/60<<" "<<ans%60<<endl;

} 

 
return 0;
}