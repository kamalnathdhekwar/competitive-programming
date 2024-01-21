#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int t;
 cin>>t;
 vector<int>v(t);
 for(int i= 0 ; i<t ; i++)
 {
    cin>>v[i];
 }

int count=1,ans=1;
 for(int i = 0 ; i<t-1 ; i++)
 {
     
    if(v[i]<=v[i+1]) {
        count++;
       ans = max(count,ans);
    }
    else {
         
        count=1;
       
        
    }
    
    // 
 }

 cout<<ans<<endl;
return 0;
}