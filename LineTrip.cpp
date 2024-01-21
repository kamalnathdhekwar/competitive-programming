#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int t;
 cin>>t;
 vector<int> ans;
 while(t--)
 {
    int n,x;
    cin>>n>>x;
    // vector<int> v(n);
    // int gas = 0;
    // for(int i =0 ; i<n ; i++)
    // {
    //     cin>>v[i];g
       

    // }

    //   for(int i =0 ; i<n-1 ; i++)
    // {
    //      gas = max(gas,(v[i+1]-v[i]));
        
    // }
    // gas = max(gas,2*(x-v[n]));
    
    //  ans.push_back(gas);
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, a[i + 1] - a[i]);
    }
    
    maxi = max(maxi, (x - a[n])*2);
    
    cout<<maxi<<endl;
    
 }
//  for(int i = 0 ; i<ans.size() ; i++)
//  {
//     cout<<ans[i]<<endl;
//  }
return 0;
}