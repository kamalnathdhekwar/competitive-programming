#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n , k ;
    cin>>n>>k;
    string s ;
    cin>>s;
    int count=0;
    for(int i = 0 ; i<n ; i++)
    {
        if(s[i]=='B') count++;
    }
    if(count==k)
    {
         cout<<0<<endl;
         break;
    }
    else {
        cout<<1<<endl;
        if(count>=8) cout<<count-k+1;
        else cout<<count-k;
        if(count>k) cout<<" A"<<endl;
        else cout<<" B"<<endl;
    }
    
    }
return 0;
}

