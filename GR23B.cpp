             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
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
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<long long> a(n+1,0);
            int c=0,p=0;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            if(a[i-1]==0 && a[i]!=0){
                c++;
            }

        }
        c = min(c,2);
        cout<<c<<endl;
        
    }
}