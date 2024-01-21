#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n ;
    cin>>n;
    int rem1 = n%2020;
    int rem2 = n%2021;
    if(n==2020 || n==2021)
        {
                cout << "YES\n";
 
        }
    else if(n<4040) cout<<"NO"<<endl;
    else {
        if(n%2020<=n/2020) cout<<"YES\n";
        else cout<<"NO\n";
    }
 }
return 0;
}