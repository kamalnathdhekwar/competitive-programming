#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;
    int v[100];
    int count=0;
    for(int i = 0 ; i<n ; i++)
    {
      cin>>v[i];
    }
    int e = v[k-1];
    int zero=0;
    for(int i = 0 ; i<n ; i++)
    {
        if(v[i]==0) zero++;
      if(v[i]>=e && v[i]>0) count++;
    }
    if(zero==n) cout<<0<<endl;
    else cout<<count<<endl;
}