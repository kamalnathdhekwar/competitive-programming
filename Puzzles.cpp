#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{
 int n,t;
 cin>>n>>t;
vector<int>v(t);
for(int i = 0 ; i<t ; i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());

// for(int i = 0 ; i<t-1 ; i++)
// {
//     if(v[i]==v[i+1]) 
//     {
//         flag = true;
//         break;
//     }
// }
int ans=v[n-1]-v[0];
for(int i = 1 ; i<=t-n ; ++i)
{
    ans=min(v[i+n-1]-v[i],ans);
}


 cout<<ans<<endl;
cout<<endl;
return 0;
}